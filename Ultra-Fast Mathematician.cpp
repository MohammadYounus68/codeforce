#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	int b[100];
	int n=sizeof(a);
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(a[i]==b[i]){
			cout<<"0";
		}
		if(a[i]==1 && b[i]==0){
			cout<<"1";
		}
		if(a[i]==0 && b[i]==1){
			cout<<"1";
		}
	}

	return 0;
}