#include<bits/stdc++.h>
#include <ctype.h>
#include <string>
using namespace std;
int main(){
	int cnt2=2;
	string a,b;
	int i=0,cnt=0;
	cin>>a>>b;
	while(i<a.size()){
		a[i]=towlower(a[i]);
		b[i]=towlower(b[i]);
		i++;
	}
	if(a==b){
		cout<<"0";
	}
	else if(a<b){
		cout<<"-1";
	}
	else if(a>b){
		cout<<"1";
	}
	return 0;
}