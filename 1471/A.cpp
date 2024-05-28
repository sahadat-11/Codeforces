//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int mx = 0, sum = 0;
   for(int i = 0; i < n; i++) {
     mx += (v[i] + x - 1) / x;
     sum += v[i];
   }
   int mn = (sum + x - 1) / x;
   cout << mn << " " << mx << "\n";
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