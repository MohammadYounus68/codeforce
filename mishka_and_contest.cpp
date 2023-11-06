#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=0,n,k,cnt=0,cnt1=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	/*for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt1++;
			}
		}	
	}	*/

	/*for(int i=0;i<n;i++){
		if(arr[i]<=k){
			 cnt++;
		}
	}
	for(int i=n;i>0;i--){
		if(arr[i]<=k){
			 cnt1++;
		}
	}*/

	while(arr[i]<=k){
		cnt++;
		++i;
	}

	/*while(arr[i]<=k){
		cnt++;
		--i;
	}*/
	
	
	// cout<<cnt-cnt1;
	
	cout<<cnt;

	return 0;
}