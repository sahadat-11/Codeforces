//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int mx = 0;
   sort(v.begin(), v.end());
   v.erase(unique(v.begin(), v.end()), v.end());
   for(int i = 0; i < (int)v.size(); i++) {
     int x = v[i] + n;
     int it = lower_bound(v.begin(), v.end(), x) - v.begin() - i;
     mx = max(mx, it);
   }
   cout << mx << '\n';
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