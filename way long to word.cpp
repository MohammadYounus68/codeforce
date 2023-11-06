#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int cnt=0;
	string s;
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>s;
	if(s.size()>10){
		cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
	
	}	
	
	
	return 0;
	}