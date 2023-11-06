#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m;
   cin>>n>>m;
   int ans =min(n,m);
   if(ans%2==1){
    cout<<"Akshan";
   }
   else{
    cout<<"Alivia";
   }

    return 0;
}