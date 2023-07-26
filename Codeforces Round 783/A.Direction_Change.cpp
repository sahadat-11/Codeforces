//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, m; cin >> n >> m;
      if(n > m) swap(n, m); // m large;
      if(n == 1 and m >= 3) cout << "-1\n";
      else {
         int ans = (n - 1) * 2;
         int dif = m - n;
         if(dif % 2 == 0) ans += dif * 2;
         else ans += (dif * 2 -1);
         cout << ans << "\n";
      }
   }
    return 0;
}
