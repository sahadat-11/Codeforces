//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   sort(v.begin(), v.end());
   vector<int> pre(n + 1, 0);
   for(int i = 1; i <= n; i++) {
      pre[i] = pre[i - 1] + v[i];
   }
   int ans = 0;
   for(int i = 0; i <= x; i++) {
     ans = max(ans, pre[n - x + i] - pre[i * 2]);
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