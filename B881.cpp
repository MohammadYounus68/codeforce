#include <bits/stdc++.h>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back

int main() {
    int t; cin >> t;
    while (t--) {
        int number_of_operation = 0;
        ll sumMax = 0;
        bool negativeNumber = false;
    	ll n; cin >> n;
 		vector<ll> a(n);
 		for(int i = 0; i < n; i++) {
 			cin >> a[i];
 		}
 		//remove 0 for all array element 
 		a.erase(remove(a.begin(), a.end(), 0), a.end());
 		for(auto i : a) {
 			sumMax += abs(i);
            if(i < 0 && !negativeNumber) { // negativeNumber == false
                number_of_operation++;
                negativeNumber = true;
            }
            else if(i != 0 && i > 0) {
                negativeNumber = false;
            }
 		}
        cout << sumMax << " " << number_of_operation << "\n";

    }

   
    return 0;
}