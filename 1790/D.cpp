//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     mp[v[i]]++;
   }
   int ans = 0;
   for(auto [val, fre] : mp) {
     ans += max(0ll, fre -  mp[val - 1]);
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