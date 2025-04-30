#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll count = 0;

    for (ll x = l1; x <= r1; ++x) {
        ll y = x; 
        while (y <= r2) { 
            if (y >= l2) { 
                count++;
            }
            if (y > r2 / k) break; 
            y *= k; 
        }
    }

    cout << count << '\n';
}

void solve2() {
    int n; cin >> n; 
    vector<int> v;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1) v.push_back(n);
    for(auto i : v) {
        cout << i;
    }
}

vector<int>towSum(vector<int> &nums, int target) {
    int a, b;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                a = i;
                b = j;
            }
        }
    }
    return {a,b};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve2();
    return 0;
}
