#include<bits/stdc++.h>
using namespace std;
int main(){

	int matrix[5][5];
	int row,col,rs,cs,r,c,ans;//rs=row_swap//cs=col_swap;

	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			cin>>matrix[row][col];
		}
	}

	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			if(matrix[row][col]==1){
				matrix[row][col]=0;		
				r=row;//2
				c=col;//5

			}
		}
		cout<<endl;
	}
	matrix[2][2]=1;
	rs=abs(2-r);//abs(2-2)=0
	cs=abs(2-c);//abs(2-5)=3
	ans=rs+cs;//ans is 3;
	cout<<ans<<endl;
	

	return 0;
}