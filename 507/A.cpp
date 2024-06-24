//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  vector<int> a(n + 1);
  vector<pair<int, int>> p;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    p.push_back({a[i], i});
  }
  sort(p.begin(), p.end());
  int sum = 0;
  vector<int> ans;
  for(auto u : p) {
  	sum += u.first;
  	if(sum <= m) {
  	  ans.push_back(u.second);
  	}
  }
  if(ans.size() == 0) cout << "0\n";
  else {
  	cout << ans.size() << "\n";
  	for(auto u : ans) cout << u << " ";
  }
  return 0;
}