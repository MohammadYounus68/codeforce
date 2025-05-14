#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back

int main() {
    ll moves = 0;
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for(int i = 1; i < n; i++) {
        if(v[i - 1] > v[i]) {
            moves += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << moves;


    return 0;
}