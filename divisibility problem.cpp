#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0,x,y;
	int arr[100];
	int arr2[100];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		//cin>>arr2[i];
	}
	for(int i=1;i<n;i++){
		
		if(arr[i]%arr[i+1]==0){
			cnt++;
		}
	}
	cout<<cnt;


	return 0;
}