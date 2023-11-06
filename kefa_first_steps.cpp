#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,cnt=0,m=1;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++){
		cin>>arr[i];
	}

	for(i=0;i<n;i++){
		if(arr[i]>=arr[i-1]){
			cnt++;
			m=max(m,cnt);
		}
		else{
			cnt=1;
		}

	}
	cout<<m;
	return 0;
}


/*

		6
   		2 2 1 3 4 1
index-ar 0 1 2 3 4 5 
if(arr[i]>=arr[i-1])
// arr[0]>=arr[0-1]
	   2 >= 0; cnt++;
 arr[1]>=arr[1-1]
 	2>=2;cnt++;

 arr[2]>=arr[2-1]
 	1>=2; not working count;

 arr[3]>=arr[3-1]
 	3>=1 cnt++;

 arr[4]>=arr[4-1];
 	4>=3 cnt++;
arr[5]>=arr[5-1]
	1>=4; not working count;


now m=1 ;

	m=max(m,cnt);
	m=max(1,1);
	m=1;

	m=max(1,2);
	m=2;

	m=max(2,3);
	m=3;


*/