//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      int l = s.size(), c = 0;
      for(int i = 0; i < l; i++) {
         if(s[i] == '_' and (s[i] == s[i + 1])) c++; 
      }
      if(s[0] == '_') c++;
      if(s[l - 1] == '_') c++;
      if(l == 1 and s[0] == '^') c++;
      cout << c << "\n";
   }
    return 0;
}