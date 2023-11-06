#include<bits/stdc++.h>
#include <memory>
using namespace std;

int main(){
	

	int k,l,m,n,d;
	int count1=0,count2=0,count3=0,count4=0;
	cin>>k>>l>>m>>n>>d;
	
	int i=1;
	while(i<=d){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
			count1++;
		}
		i++;
	}
	cout<<count1;

	
	return 0;
}
	