#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    string longCommonPrifix(vector<string> & strs){
        if(strs.empty()){
            return "";
        }
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            while(strs[i].find(prefix) != 0){
                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};
int main(){
    vector<string> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        s.push_back(str);
    }
    solution sol;
        
    string ans = sol.longCommonPrifix(s);
    cout << ans;
    return 0;
}