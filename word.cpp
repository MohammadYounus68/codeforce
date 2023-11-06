#include<iostream>
#include <pthread.h>
#include<string>
#include <wchar.h>
using namespace std;
int main(){

	int i,up=0,low=0;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++){
		if(isupper(s[i])){
			up++;
		}
		else{
			low++;
		}

	}
	if(up<low){
		for(i=0;i<s.size();i++){
			s[i]=towlower(s[i]);
		}
		cout<<s;
	}
	if(up>low){
		for(i=0;i<s.size();i++){
			s[i]=towupper(s[i]);
		}
		cout<<s;
	}
	if(up==low){
		for(i=0;i<s.size();i++){
			s[i]=towlower(s[i]);
		}
		cout<<s;
	}
	return 0;
}