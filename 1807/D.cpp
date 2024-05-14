//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   vector<int> pre(n + 1, 0);
   for(int i = 1; i <= n; i++) {
   	pre[i] = pre[i - 1] + v[i];
   }
   while(q--) {
   	int l, r, k; cin >> l >> r >> k;
   	int x = (r - l + 1) * k;
   	int xx = pre[r] - pre[l - 1];
   	int xxx = pre[n] + x - xx;
   	if(xxx % 2 == 0) cout << "NO\n";
   	else cout << "YES\n";
   }
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