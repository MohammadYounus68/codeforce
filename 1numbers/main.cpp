#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n;
	cin >> n;
	int arr[n];
	int mx = 0;
	ll ans = 0;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		mx = max(arr[i], mx);
		ans += mx - arr[i];
	}
	cout << ans;
}
int main(){
	/*
	5
	3 2 5 1 7

	*/

	solve();
	return 0;
}
