#include <cstring>
#include <ios>
#include<iostream>
#include <ostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int binary_src(int arr[],int &size,int &src){
	int l,r,mid;
	int cnt=0;
	l=0;
	r=size;
	for(int i=1;i<=size;i++){
		mid=l+r/2;
		if(mid==src){
			return mid;			
		}
		else if(arr[mid]<src){
			return r=mid+1;
			
		}
		if(arr[mid]>src){
			return l=mid-1;
			
		}
	}
	return -1;
}

int main(){
	int size,src;
	cout<<"Enter your array size: ";
	cin>>size;
	int arr[size];
	for(int i=1;i<=size;i++){
		cin>>arr[i];
	}
	cout<<"Enter your Search Element: ";
	cin>>src;
	int result=binary_src(arr,size,src);
	cout<<result;
}

	

	/*

		 int t;
   cin>>t;
   while(t--){
       long long result=0;
       long long power=1;
       int n;
       cin>>n;
       string s;
       cin>>s;
       for(int i=s.size()-1;i>=0;--i){
            int disit=s[i]-'0';
            result+=(disit*power);
            power*=2;
       }
       cout<<result<<endl;
   }



	*/
	