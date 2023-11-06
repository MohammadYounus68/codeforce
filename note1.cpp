#include<bits/stdc++.h>
using namespace std;

/*
    1) subarray/subsegment
        array = 123456
        subarray por por value nea gotito hoy example:
        123 akta sub array
        34 akta sub array

        but 1256 not subarray. 
==========================================
    2) subsequence
    array = 12345
    subsequence alomelo value nea gotito hoy.
    245 akta subsequence;
===========================================
    3)


*/

int main(){
	
/*

	bool subsequencString(string &s) {
    string target = "hello";
    int index = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == target[index]) {
            index++;
            if(index == target.length()) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    string s; cin >> s;
    if(subsequencString(s)) {
        cout << "YES";
    }else {
        cout << "NO";
    }

return 0;  

}

-----------------------------------------------------
2 number way

    void solve() {
        int t; cin >> t;
        while (t--) {
            string s; cin >> s;
            bool isfalse = false;
            for(int i = 2; i < s.size(); i++) {
                char a = s[i - 2];
                char b = s[i - 1];
                char c = s[i];
                if(a == '1' &&  b == '0' && c == '1') {
                    isfalse = true;
                }
                if(a == '0' && b == '1' && c == '0') {
                    isfalse = true;
                }
            }
            (isfalse) ? cout << "Good" << "\n" : cout << "Bad" << "\n";
        }
    }

*/
//========================================================================
//========================================================================
/*
        //string reverse no function use;

        #include <bits/stdc++.h>
        using namespace std;
        const int mx = 1e7;
        char s[mx];
        void solve() {
            int len = 0;
            scanf("%s",s);
            while (s[len] != '\0') {
                len++;
            }
            for(int i = 0, j = len - 1; i < j; i++, j--) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            printf("%s\n", s);
        }

        int main() {
            solve();
            return 0;
        }


 */

/*

    //problem abc milate hoba 
    6
    abc
    acb
    bac
    bca
    cab
    cba
    

    #include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void solve() {

    string s; cin >> s;
    if(s == "abc") {
        cout << "YES" << "\n";
        return;
    }
    for(int i = 0; i < s.size(); i++) {
        string CS = s;
        swap(CS[i],CS[(i + 1) % 3]); 
        if(CS == "abc") {
            cout << "YES" << " \n";
            return;
        }
    }
    cout << "NO" << "\n";
}
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}





*/
	
return 0;
}