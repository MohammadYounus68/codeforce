//#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	int i;
	cin>>a>>b;
	for(i=0;i<a.size();i++){
		a[i]=towlower(a[i]);
		b[i]=towlower(b[i]);
	}
	if(a==b){
		cout<<"0";
	}
	if(a<b){
		cout<<"-1";
	}
	if(a>b){
		cout<<"1";
	}

	return 0;
}