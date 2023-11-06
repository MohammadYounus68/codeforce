#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define long long ll
// using ll = long long int;
void solve() {
    int t; cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        bool ok = false;
        for(int i = 0; i < 10; i++) {
            if(x.find(s) != string:: npos) {
                ok = true;
                cout << i << endl;
                break;
            }
            x += x;
        }
        if(ok == false) {
            cout << "-1" << endl;
        }
    }
}
int main() {
    solve();
}