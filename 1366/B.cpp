//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x, m; cin >> n >> x >> m;
   int mn = x, mx = x;
   while(m--) {
   	int l, r; cin >> l >> r;
   	if(l > mx or r < mn) continue;
   	mn = min(mn, l);
   	mx = max(mx, r);
   }
   cout << mx - mn + 1 << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}