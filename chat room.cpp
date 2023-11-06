#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,j=0,k=0;
	string s;
	string s1{"hello"};
	cin>>s;
/*	for(i=0;i<s1.size();i++){

	}*/
	for(i=0;i<s.size();i++){
		if(s[i]==s1[j]){
			j++;
			k++;
		}
	}
	if(k==5){
		cout<<"YES";

	}
	else{
		cout<<"NO";
	}

	return 0;
}