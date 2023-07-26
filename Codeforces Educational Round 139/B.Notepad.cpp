//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; string s; cin >> n >> s; 
        string temp;
        bool flag = false;
        for(int i = 0; i < n - 1; i++) {
            string x = s.substr(i, 2);
            if(temp.find(x) != -1) flag = true;
            else temp += s[i];
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
} 
