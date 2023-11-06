#include <cctype>
#include <ctype.h>
#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include <tuple>
using namespace std;

void fibo(int *n){
	int f=1,s=1,result=0;
	if(*n==1){
		cout<<f<<endl;
	}
	else if(*n==2){
		cout<<f<<" "<<s<<endl;
	}
	else{ 
		cout<<f<<" "<<s;
		for(int i=2;i<*n;i++){
			result=f+s;
			cout<<" "<<result<<" ";
			f=s;
			s=result;
		}
	}
}

int main(){
	int num;
	cout<<"Enter your number:"<<endl;
	cin>>num;
	fibo(&num);	

  	
	return 0;
}