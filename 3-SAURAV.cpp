#include<bits/stdc++.h>
#include <cmath>
#include <ratio>
#include <set>
using namespace std;

int solve(int n){
    int res = 0;
    int sqrts = sqrt(n);
    for(int i = 1; i <= sqrts; i++){
        if(sqrts % i == 0){
            res += 2;
        }
    }
    if(n % sqrts == 0){
        if(n == sqrts){
            res++;
        }else{
            res += 2;
        }   
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false); 
    int n;
    cin >> n;

    set<int> s({5,2,4,3,4,1});

    set<int>:: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it;
    }

    return 0;
} 
