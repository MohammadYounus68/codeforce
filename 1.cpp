#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back
const int N = 1e6 + 5;
int numberOfDivisors(ll x) {
    // vector<int> divisors;
    int sum = 0;
    for(int i = 1; i * i <= x; i++) {
        if(x % i == 0) {
            // divisors.push_back(i);
            sum++;
            if(i != x / i) {
                sum++;
            }
        }
    }
    return sum;
}
int main() {
    
    int n; cin >> n; 
    while(n--) {
        ll x; cin >> x;
        // long long root = sqrt(x);
        int divisors  = numberOfDivisors(x);
        if(divisors == 3) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}