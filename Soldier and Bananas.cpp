#include<iostream>
#include<math.h>
using namespace std;
int main(){

	int a,b,c,i,total=0,borrow;
	cin>>a>>b>>c;
	for(i=1;i<=c;i++){
		total=total+i;
	}	
	total*=a;
	if(total<=b){
		cout<<"0"<<endl;
	}
	else{
		borrow=total-b;
		cout<<borrow;
	}
	
	
	
	return 0;
}