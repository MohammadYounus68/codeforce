#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
		int i;
		int arr[10];
		for(i=0;i<10;i++){
			cin>>arr[i];
			}
			int x;
			cin>>x;
		 cout<<min_element(arr,arr+10)-arr<<endl;
		 cout<<max_element(arr,arr+10)-arr<<endl;
		 cout<<find(arr,arr+10,x)-arr<<endl;//find the element number same or not same;
		 //12 13 5 4 6 9 8 7 1 10
			
	
        return 0;
}