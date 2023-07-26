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
      ll mxs = 1, c = 1;
      for(int i = 0; i < n - 1; i++) {
         if(s[i] == s[i+1]) {
            c++; mxs = max(c, mxs);
         }
         else c = 1;
      }
     int zero = count(s.begin(), s.end(), '0');
     int one = count(s.begin(), s.end(), '1');
     cout << max(mxs * mxs, 1ll*zero * one) << "\n";
   }
    return 0;
}
