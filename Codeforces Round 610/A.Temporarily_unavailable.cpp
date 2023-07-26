//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll a, b, c, r; cin >> a >> b >> c >> r;
      ll le = c - r;
      ll ri = c + r;
      if(a > b) swap(a, b);
      ll st = max(le, a);
      ll ed = min(ri, b);
      ll ans = abs(b - a) - max(1ll*0, ed - st);
      cout << ans << "\n";
   }
    return 0;
}
