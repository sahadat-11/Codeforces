//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v[n];
   for(int i = 0; i < n; i++) {
   	 int k; cin >> k;
   	 for(int j = 0; j < k; j++) {
       int x; cin >> x;
       v[i].push_back(x);
   	 }
   }
   vector<pair<int, int>> p;
   for(int i = 0; i < n; i++) {
   	 int mx = 0;
   	 for(int j = 0; j < v[i].size(); j++) {
   	 	mx = max(mx, v[i][j] - j + 1);
   	 }
   	 p.push_back({mx, v[i].size()});
   }
   sort(p.begin(), p.end());
   // for(auto u : p) {
   // 	cout << u.first << " " << u.second << "\n";
   // }
   int ans = 0, x = 0;
   for(auto u : p) {
   	ans = max(ans, u.first - x);
   	x += u.second;
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