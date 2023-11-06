#include<iostream>
using namespace std;
int main(){

	int a,b,count=0,i;
	cin>>a>>b;
		for(i=0;a<=b;i++){
			a*=3;
			b*=2;
			count++;
		}
	cout<<count           ;
	return 0;
}