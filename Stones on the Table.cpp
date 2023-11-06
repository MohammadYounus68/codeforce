#include<iostream>
#include<string>
#include <wchar.h>
using namespace std;
int main(){

	int i,n,count=0;
	string s;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++){
		if(s[i]==s[i+1]){
			count++;
		}
	}
	cout<<count;

	return 0;
}