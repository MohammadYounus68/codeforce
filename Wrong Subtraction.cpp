#include<iostream>
using namespace std;
int main(){

	int n,i,s,cunt=0;
	cin>>s>>n;
	for(i=0;i<n;i++){
		if(s%10==0){
			s/=10;
		}
		else{
			s-=1;
		}
	}
	
cout<<s;

	return 0;
}