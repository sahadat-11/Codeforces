//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, q; cin >> n >> k >> q;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int sum = 0, cnt = 0, ans = 0;
   for(int i = 0; i < n; i++) {
    if(v[i] <= q) cnt++;
    else cnt = 0;
    if(cnt >= k) ans += (cnt - k + 1);
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