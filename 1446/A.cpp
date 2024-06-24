//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, w; cin >> n >> w;
   vector<int> a(n);
   vector<pair<int, int>> v;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     v.push_back({a[i], i});
   }
   int x = (w + 1) / 2;
   sort(v.rbegin(), v.rend());
   int sum = 0;
   vector<int> ans;
   for(int i = 0; i < n; i++) {
     if(sum + v[i].first <= w) {
     	ans.push_back(v[i].second + 1);
     	sum += v[i].first;
     }
   }
   if(ans.size() == 0 or sum < x) {
   	cout << "-1\n"; return;
   }
   cout << (int)ans.size() << "\n";
   for(auto u : ans) cout << u << " "; cout << "\n";
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