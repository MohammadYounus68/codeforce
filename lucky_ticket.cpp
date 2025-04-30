#include <bits/stdc++.h>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back

int main() {
    int n; string s;
    cin >> n >> s;
    bool lucky_number = true;
    for(int i = 0; i < n; i++) {
        if(s[i] != '4' && s[i] != '7') {
            lucky_number = false;
            break;
        }
    }
    int first_half = 0, second_half = 0;
    if(lucky_number) {
        for(int i = 0; i < n / 2; i++) {
            first_half += s[i] - '0';
            second_half += s[i + n / 2] - '0';
        }
        if(first_half == second_half) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }else {
        cout << "NO" << endl;
    }
    return 0;
}