#include<iostream>
using namespace std;
int main(){

	int arr[3000];
	int i,valu1=0,valu2=0,j=0;
	for(i=0;i<2000;i++){
		cin>>arr[i];
	}
	for(i=0;i<2000;i++){
	//	if((arr[i])+(arr[i+1])+(arr[i+2]<(arr[i+1])+(arr[i+2])))
		valu1=(arr[i]+arr[i+1]+arr[i+2]);
		valu2=(arr[i+1]+arr[i+2]+arr[i+3]);
	
		if(valu1<valu2){
				j++;
		}
			
	}
		
		cout<<j;
	
	return 0;
}