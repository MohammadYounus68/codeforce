#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int>g1;
	for(int i=1;i<=5;i++)
	g1.push_back(i);
	
	cout<<"Outut of begin and end:"<<endl;
	for(auto i=g1.begin();i !=g1.end();++i);
	cout<<*i<<" ";
	
	cout<<"\n Output of cbegin and cend:";
	for(auto i=g1.cbegin();i !=g1.cend();++i);
	cout<<"*i<<" ";
return 0;
}