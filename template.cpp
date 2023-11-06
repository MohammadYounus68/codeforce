#include<iostream>
using namespace std;

template<class temp>
	temp add ( temp x,temp y){
	return x+y;
}

int main(){
		int a,b;
		cin>>a>>b;
		cout<<"First part="<<endl;
		cout<<add(a,b);
		 double m,n;
		 cin>>m>>n;
		 cout<<"Secound part="<<endl;
		 cout<<add(m,n);
			
        return 0;
}