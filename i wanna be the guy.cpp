#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,p,q;
	int arr[1000];
	int cnt1=0;
	cin>>n>>p;
	
	for(int i=0;i<p;i++){
		cin>>arr[i];
	}
	cin>>q;
	for(int i=p;i<p+q;i++){
		cin>>arr[i];
	}
	sort(arr,arr+(p+q));
	for(int i=0;i<p+q;i++){
		if(arr[i]!=arr[i+1]){
			cnt1++;
		}
	}
	if(cnt1==n){
		cout<<"I become the guy.";
	}
	else{
		cout<<"Oh, my keyboard!";
	}
	
	/*for(int i=0;i<n;i++){
		if(n==v[i] && n==v2[i]){
			cnt3++;
		}
		else if(n==v[i]){
			cnt1++;
		}
		else if(n==v2[i]){
			cnt2++;
		}
		
		
	}
	if(cnt3>0){
		cout<<"oh, my keyboard!";
	}
	else if(cnt1>0){
		cout<<"I become the guy.";
	}
	else if(cnt2>0){
		cout<<"I become the guy.";
	}
	
	else{
		cout<<"Oh, my keyboard!";

	}*/
	return 0;
}