#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    int flag=1;
    cin>>s;
    for(i=0;i<s.size();){
      if(s[i]=='W' && s[i+1]=='U' && s[i+2]){
         i+=3;
         if(flag==0){
            cout<<" ";
            flag=1;

         }
         continue;
      }
      else{
         cout<<s[i];
         flag=0;
         i++;
      }
    }
    cout<<endl;
    return 0;
}