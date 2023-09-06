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
      int x = 0, y = 0;
      bool flag = false;
      for(auto u : s) {
         if(u == 'R') x++;
         else if(u == 'L') x--;
         else if(u == 'U') y++;
         else y--;
         if(x == 1 and y == 1) flag = true;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
   }
    return 0;
}