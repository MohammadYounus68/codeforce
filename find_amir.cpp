#include<iostream>
using namespace std;
int main(){
	int n,ans;
	cin>>n;
	if(n%2==0){
		 ans=n/2-1;
		 cout<<ans;
	}
	else{
		 ans=(n-1)/2;
		 cout<<ans;
	}

}