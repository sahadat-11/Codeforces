//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; string s; cin >> n >> s;
  int ans = INT_MAX;
  for(int i = 0; i < n - 1; i++) {
    int x = stoi(s.substr(i, 2));
    string r = s.substr(0, i) + s.substr(i + 2, n - i - 2);
    for(int j = 0; j < n - 2; j++) {
      x = min(x + (r[j] - '0'), x * (r[j] - '0'));
    }
    ans = min(ans, x);
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