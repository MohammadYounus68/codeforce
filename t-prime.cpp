/*
what is t-prime ?
A number is called t-prime if it has exactly three(3) divisors
x = p^2
example 
x = 9 
x = 3 * 3
=1,3,9 is 9 divisors and 3 is prime number

*/
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
const int N = 1e6 + 6;
vector<bool> isPrime(N,false); //initial value is false = 0;
void seive() {//seive algo using prime check
    isPrime[0] = isPrime[1] = true; //bcz 1 is always is divisors so not check
    for(int i = 2; i * i <= N; i++) {
        if(!isPrime[i]) { //!isPrime[i] mean isPrime[i] == false check
            for(int j = i * i; j <= N; j += i) {
                //multiple number is always divisors so its true 
                isPrime[j] = true; 
            }
        }
    }
}
int main() {
    seive();
    int t; cin >> t;
    while (t--) {   
        ll x; cin >> x;
        ll root = sqrt(x);// x = 9 so root * root 3 * 3
        if(root * root == x && !isPrime[root]) { // check root number prime or not prime
            cout << "YES\n";          

        }else {
            cout << "NO\n";
        }
    }
    return 0;
}