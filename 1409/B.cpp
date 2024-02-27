//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, x, y, n; cin >> a >> b >> x >> y >> n;
   int use_a1 = max(x, a - n);
   int use_b1 = max(y, (b - (n - (a - use_a1))));
   int use_b2 = max(y, b - n);
   int use_a2 = max(x, (a - (n - (b - use_b2))));
   //cout << use_a1 << use_b1 << use_a2 << use_b2 << endl;
   cout << min(use_a1 * use_b1, use_a2 * use_b2) << '\n';
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