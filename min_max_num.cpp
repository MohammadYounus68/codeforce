#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
		int i;
		int arr[10];
		for(i=0;i<10;i++){
			cin>>arr[i];
			}
		 cout<<min_element(arr,arr+10)-arr<<endl;
		 cout<<max_element(arr,arr+10)-arr<<endl;
		 //12 13 5 4 6 9 8 7 1 10
			
	
        return 0;
}