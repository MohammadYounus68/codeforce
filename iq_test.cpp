#include<iostream>
using namespace std;
int main(){
	int n,i,j,cnt1=0,cnt2=0;
	cin>>n;
	int x=0,y=0;
	int arr[n];
	for(i=1;i<=n;i++){
		cin>>arr[i];
		
	}

	for(i=1;i<=n;i++){
		if(arr[i]%2==0){
			x=i;
			cnt1++;
		}
		if(arr[i]%2==1){
			y=i;
			cnt2++;
		}
	}
	
	if(cnt1>cnt2){
		cout<<y;
	}
	if(cnt1<cnt2){
		cout<<x;
	}

	return 0;
}