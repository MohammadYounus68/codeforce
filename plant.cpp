#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,cnt1=0,cnt2=0,i,j,tringle=2;
	cin>>n;
	tringle*=n;
	for(i=1;i<=tringle;i++){
		for(j=1;j<=(tringle*i-1);j++){
			cnt1++;
			if(j%2==0){
				cnt2++;
			}
		}
	}
	cout<<cnt1-cnt2;
	return 0;
}