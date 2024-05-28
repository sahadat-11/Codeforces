//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   vector<pair<int, int>> p;
   for(int i = 0; i < n; i++) {
   	mp[v[i]]++;
   	if(mp[v[i]] <= k) p.push_back({v[i], i});
   }
   sort(p.begin(), p.end());
   // for(auto u : p) {
   // 	cout << u.first << " " << u.second << '\n';
   // }
   vector<int> ans(n, 0);
   int nn = p.size();
   for(int i = 0; i < nn - nn % k; i++) {
   	int u = p[i].first;
   	int indx = p[i].second;
    ans[indx] = i % k + 1;
   }
   for(int i = 0; i < n; i++) cout << ans[i] << " ";
   cout << "\n";
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