#include<bits/stdc++.h>
#include <cmath>
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

    int result = solve(n);
    cout << result;

    return 0;
} 

void name(){
    // int n;
    // cin >> n;
    for(int i = 0; i < 10; i++){
        cout << "i:" << i << endl;
    }
    // return 0;
}