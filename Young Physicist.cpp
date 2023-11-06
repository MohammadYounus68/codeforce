#include<iostream>
using namespace std;
int main(){
	int m[100][100];
	int n,i,j,sum=0,sum1=0,sum2=0,total;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			cin>>m[i][j];
		}
			sum+=m[i][0];
			sum1+=m[i][1];
			sum+=m[i][2];
	}
	if(sum==0&&sum1==0&&sum2==0)
	 	cout<<"YES";
	 else
	 	cout<<"NO";
	

	return 0;
}