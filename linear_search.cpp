#include <cstring>
#include<iostream>
#include <ostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[],int &size,int &src){
	for(int i=0;i<size;){
		if(arr[i]==src){
			cout<<"This element location is "<<i;
		}
		i++;
	}
}

int main(){
	int size,src;
	cout<<"Enter your array size:";
	cin>>size;
	int arr[size];
	cout<<"Enter your element number:";
	for(int i=0;i<size;i++){
		cin>>arr[i];		
	}		
	cout<<"Enter your Search Elmement:";
	cin>>src;
	linear_search(arr,size,src);
	
}
	
	