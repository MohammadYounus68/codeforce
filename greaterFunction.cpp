#include<bits/stdc++.h>
#include <functional>
#include <regex>
using namespace std;
int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,greater_equal<int>());
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}