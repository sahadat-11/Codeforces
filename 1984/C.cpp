//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
int a[N], n;

void solve() {
   cin >> n;
   for(int i = 1; i <= n; i++) {
    cin >> a[i];
   }
   int cur_sum = 0, ans = 0;
   for(int i = 1; i <= n; i++) {
     cur_sum += a[i];
     ans = max(abs(ans + a[i]), abs(cur_sum));
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