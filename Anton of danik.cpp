#include<iostream>
using namespace std;
int main(){

	int n,i,count=0,count1=0;
	string s,A,D;
	cin>>n>>s;
	for(i=0;i<n;i++){
		if(s[i]=='A'){
			count++;
		}
		else{
			count1++;
		}
	}
	if(count>count1){
		cout<<"Anton"<<endl;
	}
	if(count<count1){
		cout<<"Danik"<<endl;
	}
	if(count==count1){
		cout<<"Friendship"<<endl;
	}

	

	return 0;
}