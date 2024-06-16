//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  vector<pair<int, int>> v;
  for(int i = 1; i <= n; i++) {
  	v.push_back({a[i], i});
  }
  sort(v.begin(), v.end());
  vector<int> ans;
  for(auto u : v) {
  	if(u.first <= k) {
  		ans.push_back(u.second);
  		k -= u.first;
  	}
  }
  sort(ans.begin(), ans.end());
  cout << ans.size() << "\n";
  for(auto u : ans) cout << u << " ";
  return 0;
}