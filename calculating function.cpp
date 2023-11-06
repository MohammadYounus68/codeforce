#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,cnt=0,cnt1=0;
	cin>>n;
	int arr[n];
	int arr1[n];
	for(int i=1;i<=n;i++){
	
		if(i%2==1){
			cnt1+=i;
		}
		if(i%2==0){
			cnt+=i;
		}
	}
	long long ans=cnt-cnt1;
	cout<<ans;
	
	return 0;
}