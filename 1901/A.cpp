//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int mx = v[0];
   for(int i = 1; i < n; i++) {
   	mx = max(mx, v[i] - v[i - 1]);
   }
   mx = max(mx, 2 * (x - v[n - 1]));
   cout << mx << "\n";
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