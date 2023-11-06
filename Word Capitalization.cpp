#include<iostream>
#include<string>
#include <wchar.h>
using namespace std;
int main(){

	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[0]==towlower(s[i])){

			s[0]=towupper(s[i]);
		}
		
	}
	cout<<s;
	return 0;
}