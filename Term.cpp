#include <cctype>
#include<iostream>
#include<string>
using namespace std;
int main(){
	
	int i,a,b,n,sum=0,k=0;
	cin>>n;
	for(i=0;i<n;i++){
		
		cin>>a>>b;
		sum=(a+k)-b;
		if(sum<1){
			k=0;
		}
		else
		{
			k=sum;
		}

	}
	cout<<sum;
	
	return 0;
}