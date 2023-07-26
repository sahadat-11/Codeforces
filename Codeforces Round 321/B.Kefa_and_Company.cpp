//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<pair<int, int>> v;
  for(int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    v.push_back({a, b});
  }
  sort(v.begin(), v.end());
  int sum = 0, l = 0, res = 0;
  for(int r = 0; r < n; r++) {
    sum += v[r].second;
    while(v[r].first - v[l].first >= k) {
      sum -= v[l++].second;
    }
    res = max(res, sum);
  }
  cout << res << "\n";
  return 0; 
}