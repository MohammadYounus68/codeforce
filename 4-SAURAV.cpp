#include <algorithm>
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
    int n;
    cin >> n;
    for(int i = 2; i * i < n; i++){
        if(n % i == 0){
            cout << "its not prime: " << n;
        }else{
            cout << "its prime: " << n;
        }
    }
}
void its_prime(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                v.push_back(i);
                n /= i;
            }
        }
    }

    if(n > 1) v.push_back(n);
    for(auto i : v){
        //cout << i << " "; 
    }
}
int main(){
    its_prime();
    // print();
}