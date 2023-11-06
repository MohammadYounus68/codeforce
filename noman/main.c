#include <stdio.h>
#include "./cvector.h"

typedef struct {
	int id;
	cvector allocation;
	cvector maximum;
	cvector need;
} process ;

cvector resource_array_input ()
{
	cvector resources = cvector_create ( sizeof(int) );
	printf ( "Enter the number of resources : " );
	int resources_count = 0; scanf ( "%d", &resources_count );
	int instances = 0;
	for ( int i = 0 ; i < resources_count ; ++i ) {
		printf ( "Enter the number of instances of resource %d : ", i );
		scanf ( "%d", &instances );
		cvector_emplace_back( &resources, &instances );
	}
	return resources;
}

cvector process_array_input ( int resource_count )
{
	cvector processes = cvector_create( sizeof (process) );
	printf ( "Enter the numver of processes : " );
	int pc = 0; scanf ( "%d", &pc );
	for ( int i = 0 ; i < pc ; ++i ) {
		printf ( "Enter details of p %d :\n", i );
		process p;
		p.id = i;
		p.allocation = cvector_create( sizeof(int) );
		printf ( "Enter the resources needed as allocated : " );
		for ( int j = 0 ; j < resource_count ; ++j ) {
			int all = 0; scanf ( "%d", &all );
			cvector_emplace_back( &p.allocation, &all );
		}
		p.maximum = cvector_create ( sizeof(int) );
		printf ( "Enter the resources needed as maximum : " );
		for ( int j = 0 ; j < resource_count ; ++j ) {
			int all = 0; scanf ( "%d", &all );
			cvector_emplace_back( &p.maximum, &all );
		}
		p.need = cvector_create ( sizeof(int) );
		cvector_emplace_back( &processes, &p );
	}
	return processes;
}

cvector calculate_process_needs ( cvector processes, int resource_count )
{
	void* item;
	foreach_element ( processes, item ) {
		for ( int i = 0 ; i < resource_count ; ++i ) {
			int this_need = *(int*)cvector_at( &(*(process*)item).maximum, i ) - *(int*)cvector_at( &(*(process*)item).allocation, i );
			cvector_emplace_back( &(*(process*)item).need, &this_need );
		}
	}
	return processes;
}

cvector calculate_available ( cvector resources, cvector processes, int resource_count )
{
	cvector available = cvector_create( sizeof(int) );
	for ( int i = 0 ; i < resource_count ; ++i ) {
		void* item;
		int sum = 0;
		foreach_element( processes, item ) {
			sum += *(int*)cvector_at( &(*(process*)item).allocation, i );
		}
		sum = *(int*)cvector_at ( &resources, i ) - sum;
		cvector_emplace_back( &available, &sum );
	}
	return available;
}

bool apply_bankers_algo ( cvector available, cvector processes )
{
	cvector work = cvector_create ( sizeof(int) );
	void* elem;
	foreach_element ( available, elem ) {
		cvector_emplace_back( &work, elem );
	}
	cvector finish = cvector_create ( sizeof(bool) );
	for ( int i = 0 ; i < cvector_size ( &processes ) ; ++i ) {
		bool none = false;
		cvector_emplace_back( &finish, &none );
	}
	bool found = false;
	int found_index = -1;
	step_two:
		found = false;
		found_index = -1;
		for ( int i = 0 ; i < cvector_size ( &processes ) ; ++i ) {
			fprintf ( stderr, "i %d\n", i );
			if ( *(bool*)cvector_at ( &finish, i ) != false ) continue;
			bool less = true;
			void* item;
			foreach_element ( processes, item ) {
				if ( *(int*)cvector_at ( &(*(process*)item).need, i ) > *(int*)cvector_at ( &work, i ) ) {
					less = false;
				}
			}
			if ( less ) {
				found = true;
				found_index = i;
				break;
			}
		}
		if ( found ) {
			for ( int j = 0 ; j < cvector_size( &work) ; ++j ) {
				fprintf ( stderr, "wrus " );
				*(int*)cvector_at ( &work, j ) += *(int*)cvector_at ( &(*(process*)cvector_at( &processes, found_index )).allocation, j );
				fprintf ( stderr, "wrue\n" );
			}
			*(bool*)cvector_at( &finish, found_index ) = true;
			goto step_two;
		}
		bool no_problem = true;
		void* element;
		foreach_element( finish, element ) {
			if ( *(bool*)element == false ) {
				no_problem = false;
			}
		}
	cvector_destroy( &finish );
	cvector_destroy( &work );
	return no_problem;
}

void processes_print ( cvector processes )
{
	void* item;
	foreach_element ( processes, item ) {
		printf ( "\nProcess id : %d\n", (*(process*)item).id );
		void* x;
		printf ( "Allocation: ");
		foreach_element( (*(process*)item).allocation, x ) {
			printf ( "%d ", *(int*)x );
		}
		printf ( "\n" );
		printf ( "Maximum: ");
		x = NULL;
		foreach_element( (*(process*)item).maximum, x ) {
			printf ( "%d ", *(int*)x );
		}
		printf ( "\n" );
		printf ( "Need: ");
		x = NULL;
		foreach_element( (*(process*)item).need, x ) {
			printf ( "%d ", *(int*)x );
		}
		printf ( "\n" );
	}
}

int main () {
	cvector resources = resource_array_input ();
	cvector processes = process_array_input ( cvector_size( &resources) );
	processes = calculate_process_needs ( processes, cvector_size( &resources) );
	cvector available = calculate_available ( resources, processes, cvector_size( &resources) );
	processes_print ( processes );
	bool result = apply_bankers_algo ( available, processes );
	printf ( "Result: %d ", result );

	// debug start
	/*void* item;
	foreach_element ( available, item ) {
		printf ( "x: %d, ", *(int*)item );
	}*/
	// debug end

	cvector_destroy ( &available );
	void* elem;
	foreach_element( processes, elem ) {
		cvector_destroy ( &(*(process*)elem).allocation );
		cvector_destroy ( &(*(process*)elem).maximum );
		cvector_destroy ( &(*(process*)elem).need );
	}
	cvector_destroy( &processes );
	cvector_destroy ( &resources );

	return 0;
}