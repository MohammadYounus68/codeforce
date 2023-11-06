#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int medal[50];
	int cup[50];
	cin>>medal[0]>>medal[1]>>medal[2];
	cin>>cup[0]>>cup[1]>>cup[2];
	cin>>n;
	int c,m;
	c=cup[0]+cup[1]+cup[2];
	m=medal[0]+medal[1]+medal[2];
	
	n-=(c+4)/5;
	if(m<=10*n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}