#include <functional>
#include<iostream>
#include<bits/stdc++.h>
#include <tuple>
#define ll long long 
using namespace std;               

int main(){
    
    string s;
    cin >> s;
    int ans = 1,c = 0;
    char l = 'd';
    for(int d : s){
        if(l == d){
            ++c;
            ans = max(ans,c);
        }
        else{
            l = d;
            c = 1;
        }
    }             
    cout << ans;                       
 
    return 0;
}