#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
// #define ll long long int;
// using ll = long long int;
typedef long long int ll;
vector<int> bubbleSort(vector<int> &v) { // aktu bubbleSort dea solve korar try korlam ar ki
	for(int i = 0; i < 3 - 1; i++) {
		for(int j = 0; j < 3 - i - 1; j++) {
			if(v[j] > v[j + 1]) {
				int swap = v[j];
				v[j] = v[j + 1]; // swap for details 
				v[j + 1] = swap;
			}
		}
	}
	return v;
}
void solve() {
	vector<int> v(3);
	for(int i = 0; i < 3; i++) {
		cin >> v[i];
	}
	vector<int>sortedVector = bubbleSort(v);

	if(10 <= sortedVector[1] + sortedVector[2] ) {
		cout << "YES\n";
	}
	else if(10 <= sortedVector[0] + sortedVector[1]) {
		cout << "YES\n";
	}
	else if(10 <= sortedVector[0] + sortedVector[2]) {
		cout << "YES\n";
	}else {
		cout << "NO\n";
	}
}
int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}