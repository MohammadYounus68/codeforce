#include<bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
   
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i : v) {
        cin >> i;
    }
    /*
    *list a vector push way;
    list<int> li(v.begin(),v.end());
    list<int> li;
    li.insert(li.begin(),v.begin(),v.end());

    list<int> li;
    for(auto i : v) {
        li.push_back(i);
    }
    */
    list<int> li;

    for(auto i : li) {
        cout << i << " ";
    }

}