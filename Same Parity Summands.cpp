
#include<bits/stdc++.h>
using namespace std;
// #define ll long long int;
// using = ll long long;
typedef long long int ll;
void solve() {
    ll n;
    int k ;
    cin >> n >> k;
    if(k > n) {
        cout << "NO" << endl ;
        return ;
    }
    if( (n-k + 1) & 1 ) {
        cout << "YES" << endl ;
        for(int i = 1 ; i < k ; i++) {
            cout << 1 << " ";
        }
        cout << n - k + 1 << endl ;
    }
    else if( (n - 2*(k-1) )%2 ==0 && (n - 2*(k-1))> 0 ) {
        cout << "YES" << endl ;
        for(int i = 1 ; i < k ; i++){
            cout << 2 << " ";
        }
        cout << n - 2*(k-1) << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 1; i < t; i++) {
        solve();
    }

    return 0;
}