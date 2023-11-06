#include<iostream>
#include<string>
using namespace std;
 
 
int main()
{   
    int i,j;
    string s,s1="",s2;
    cin>>s>>s2;
 
    for(i=s.size()-1;i>=!'0';--i){
        s1+=s[i];
    }
    if(s1==s2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
    
    return 0;
}
/*i=0;i<3;i++                                           s,3-0-1;

    




*/