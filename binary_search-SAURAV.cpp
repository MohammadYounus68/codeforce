#include<bits/stdc++.h>
#include<vector>
//#define cerr if(0)cerr
using namespace std;
int binary_search(vector<int> arr,int n,int src){
	int i,j;
	int left=0;
	int right=n-1;
	

	for(i=0;i<log2(n);i++){
				int mid=left+(right-left)/2;
		cerr << mid << " " << arr[mid] << ' ';

		if(src==arr[mid]){
			return mid;
		}
		else if(src>arr[mid]){
			left=mid+1;
		}
		else{
			right=mid;
		}

	}
	return -1;

}
int main(){

	int n,src;
	vector<int> v ( 105) ;
	for ( int i = 0 ; i < int(v.size()) ; ++i ) v[i] = 6 + i;

	cout<<"Enter your search item="<<endl;
	cin>>src;
      
     int result= binary_search(v, 105, src);
     
      cout<<result;

        return 0;
}