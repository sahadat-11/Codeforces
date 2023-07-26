//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  map<int, vector<int>> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i]].push_back(i);
  }
  // for(auto u : mp) {
  //   auto v = u.second;
  //   for(auto x : v) cout << u.first << " " << x << "\n";
  // }
  vector<pair<int, int>> ans;
  for(auto u : mp) {
    auto v = u.second;
    int d = 0;
    bool flag = true;
    for(int i = 1; i < v.size(); i++) {
      if(i == 1) d = v[i] - v[i - 1];
      else {
        if(d != v[i] - v[i - 1]) flag = false;
      }
    }
    if(flag) ans.push_back({u.first, d});
  }
  sort(ans.begin(), ans.end());
  cout << ans.size() << "\n";
  for(auto u : ans) {
    cout << u.first << " " << u.second << "\n";
  }
  return 0;
}

