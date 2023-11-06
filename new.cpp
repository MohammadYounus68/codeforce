#include<iostream>
//#include<math.h>
using namespace std;
int main(){
	
	int a[20],i,n,r,count=0;
	cin>>n>>r;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		if(a[i]>r){
			count++;
		}
	
	}
	cout<<count;

	return 0; 
}
