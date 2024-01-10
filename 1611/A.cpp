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
      int r = -1;
      for(int i = 0; i < s.size(); i++) {
         if((s[i] - '0') % 2 == 0) {
           r = i;
         }
      }
      if(r == -1) cout << -1 << "\n";
      else {
        if((s[s.size() - 1] - '0') % 2 == 0) {
          cout << "0\n";
        }
        else if((s[0] - '0') % 2 == 0) {
          cout << "1\n";
        }
        else {
          cout << "2\n";
        }
      }
   }
   return 0;
}

