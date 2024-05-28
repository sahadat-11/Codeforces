//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; cin >> n;
   vector<int> v(n + 1), pre(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
     pre[i] = pre[i - 1] + v[i];
   }
   int ans = 0;
   for(int i = 1; i < n; i++) {
   	ans = max(ans, __gcd(pre[i], pre[n] - pre[i]));
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