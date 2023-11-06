#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int n,count=0;
	cin>>s;
		for(n=0;n<s.size();n++){
			if(s[n]=='4'||s[n]=='7'){
				count++;
			}
			//s[n]/=10;
		}
	if(count==4||count==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}