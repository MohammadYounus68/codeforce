#include<stdio.h>
#include<math.h>
	


int main(){
	int age;
	printf("please Enter your number:");
	scanf("%d",&age);
	if(age<18){
		printf("you are minor.\n");
		printf("Not Eligible to work");
	}
	else{
		if(age>=18 && age<=60){
			printf(" you are married now\n");
			printf(" please go married");
		}
		else if(age>=61 && age<=90){
			printf("you are mariam  90 yars old\n");
			printf("Go to kabar istan now");
		}
		else{
			printf("tomi jatir pita bango bundho");
		}
	}


	
	
	
	return 0;
}

