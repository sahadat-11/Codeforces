//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, a, b; cin >> n >> k >> a >> b;
   vector<int> x(n + 1), y(n + 1);
   for(int i = 1; i <= n; i++) {
    cin >> x[i] >> y[i]; 
   }
   int ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
   int minx = 1e18, miny = 1e18;
   for(int i = 1; i <= k; i++) {
   	minx = min(minx, abs(x[i] - x[a]) + abs(y[i] - y[a]));
   	miny = min(miny, abs(x[i] - x[b]) + abs(y[i] - y[b]));
    ans = min(ans, minx + miny);
   }
   cout << ans << "\n";
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