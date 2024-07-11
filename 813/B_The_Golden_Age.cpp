//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
#define int __int128
void solve() {
   ll x, y, l, r; cin >> x >> y >> l >> r;
   set<int> xx, yy;
   int num1 = x, num2 = y;
   xx.insert(1);
   yy.insert(1);
   while(num1 <= r) {
   	 xx.insert(num1);
   	 num1 *= x;
   }
   while(num2 <= r) {
   	 yy.insert(num2);
   	 num2 *= y;
   }
   // for(auto u : xx) cout << u << " "; cout << "\n";
   // for(auto u : yy) cout << u << " ";
   set<int> ans;
   for(auto u : xx) {
   	for(auto v : yy) {
   	  ll val = u + v;
   	  if(val >= l and val <= r) ans.insert(val);
   	}
   }
  //  //cout << ans.size() << " ";
  //  sort(ans.begin(), ans.end());
  //  auto it = unique (ans.begin(), ans.end());
  //  ans.resize(distance(ans.begin(), it) );
  // // for(auto u : ans) cout << u << " ";
   ll mx = 0, pre = l - 1;
   for(auto u : ans) {
     ll t = u;
     mx = max(mx, t - pre - 1);
     pre = t;
   }
   mx = max(mx, r - pre);
   cout << mx;
}
signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}