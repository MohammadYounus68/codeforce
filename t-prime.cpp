#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back
const int N = 1e6 + 5;
vector<bool> isPrime(N,false);
void seive() {
    isPrime[0] = isPrime[1] = true;
    for(int i = 2; i * i <= N; i++) {
        if(!isPrime[i]) {
            for(int j = i * i; j <= N; j += i) {
                isPrime[j] = true;
            }
        }
    }
    
}
int main() {
    seive();  
    int n; cin >> n; 
    while(n--) {
        ll x; cin >> x;
        long long root = sqrt(x);
        if(root * root == x && !isPrime[root]) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}

/*
3
4 5 6
YES
NO
NO

https://codeforces.com/contest/230/problem/B

*/