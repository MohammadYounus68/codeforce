#include <cstring>
#include<iostream>
#include <ostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
void result(){

}

int main(){
	int n,a=0;
	int arr[n];
	int arr2[100];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=90;j<=100;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" A+"<<endl;
			}
		}
		for(int j=80;j<=89;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" A"<<endl;
			}
		}
		for(int j=70;j<=79;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" A-"<<endl;
			}
		}
		for(int j=60;j<=69;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" B+"<<endl;
			}
		}
		for(int j=50;j<=59;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" B-"<<endl;
			}
		}
		for(int j=40;j<=49;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" C"<<endl;
			}
		}
		for(int j=35;j<=39;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" D"<<endl;
			}
		}
		for(int j=0;j<=34;j++){
			if(arr[i]==j){
				cout<<"Student "<<i<<":"<<" F"<<endl;
			}
		}

	}		
		

}
	
	