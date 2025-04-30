#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int ans = 0;
    vector<int> v;
    cin >> n;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            v.push_back(i);
        }
        if(i != n / i){
            v.push_back(n / i);
        }
    }   
    for(auto i : v){
        cout << i << ' ';
    }
}
void print(){
    long long n,t;
    cin >> t >> n;
    while(t--){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        cout << sum << endl;

    }
    
}
int main(){
    //solve();
    print();
}