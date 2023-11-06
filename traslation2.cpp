#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	string a,b,rev=" ";
	cin>>a>>b;
	for(i=a.size()-1;i>=!'0';--i){
		rev+=a[i];
	}
	
	if(rev==b){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}