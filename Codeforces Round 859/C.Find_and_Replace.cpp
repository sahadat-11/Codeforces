//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; string s; cin >> n >> s;
     bool flag = true;
     for(int i = 0; i < n; i++) {
       int x = i % 2;
       for(int j = i + 1; j < n; j++) {
         if(s[i] == s[j] and x != j % 2) flag = false;
       }
     }
     if(flag) cout << "YES\n";
     else cout << "NO\n";
   }
   return 0;
}
