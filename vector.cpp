#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int n,m,t;
	cin >> t;
	while ( t-- ) {
	vector<int>v;
	for ( int i = 0 ; i < 3 ; ++i ) {
		cin>>m;
		v.push_back(m);
	}

	sort(v.begin(),v.end());
	cout<<v[1]<<endl;
}
	return 0;
}
