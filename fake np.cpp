#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,r;
	int cnt=2;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		if(l==r){
			cout<<l;
		}
		else{
			if(i%2==0){
				if(i%cnt==0){
					cout<<cnt;
					break;
				}
				else{
					cnt++;
				}
			}

		}
		
	}
	return 0;
}