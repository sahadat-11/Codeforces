//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; string s; cin >> n >> s;
     for(int i = 0; i < n; i++) {
       if(s[i] <= 'Z') s[i] = s[i] + 32;
     }
     string ans = "";
     for(int i = 0; i < n; i++) {
       if(s[i] != s[i + 1]) ans += s[i];
     }
     if(ans == "meow") cout << "YES\n";
     else cout << "NO\n";
   }
    return 0;
}
