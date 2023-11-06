#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int column[n];
	for(int i=0;i<n;i++){
		cin>>column[i];
	}
	sort(column,column+n);
	for(int i=0;i<n;i++){
		cout<<column[i]<<" ";
	}
	return 0;
}