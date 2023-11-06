#include<iostream>
#include<string>
using namespace std;
int main(){
	int i;
	string s;
	cin>>s;
	for(i=0;i<1;i++){
		if(s=="wjmzbmr"){
			cout<<"CHAT WITH HER!";
			break;
		}

		if(s.size()%2==0){
			cout<<"CHAT WITH HER!";
		}
		
		if(s.size()%2==1)
		{
			cout<<"IGNORE HIM!";
		}
	}
 
	return 0;
 
}