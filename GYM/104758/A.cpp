//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; cin >> n;
  vector<int> v(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) cin >> v[i];
  int l = 1, r = n, ans = 0;
  while (l <= r) {
    if (v[l] == v[r]) {
      l++; r--;
      continue;
    }
    else if (v[l] < v[r]) {
      v[l + 1] += v[l];
      l++;
    }
    else {
      v[r - 1] += v[r];
      r--;
    }
    ans++;
  }

  cout << ans << '\n';
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}