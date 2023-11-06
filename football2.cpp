#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int i,cnt,cnt1;
	cin>>s;
	for(int i=0;i<s.size();){
		cnt=0,cnt1=0;
		while(s[i]=='0'){
			i++;
			cnt++;
			if(cnt==7){
				goto ans;
			}
		}
		while(s[i]=='1'){
			i++;
			cnt1++;
			if(cnt1==7){
				goto ans;
			}
		}
	}
	ans:if(cnt==7||cnt1==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}
//1 2 3 4 5 6 7 