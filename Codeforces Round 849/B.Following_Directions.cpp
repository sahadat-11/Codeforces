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
      int a = 0, b = 0; bool flag = false;
      for(int i = 0; i < n; i++) {
         if(s[i] == 'U') a++;
         if(s[i] == 'D') a--;
         if(s[i] == 'R') b++;
         if(s[i] == 'L') b--;
         if(a == 1 and b == 1) flag = true;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
   }
    return 0;
}
