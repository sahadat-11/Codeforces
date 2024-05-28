//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  vector<int> used(n + 3, 0);
  for(int i = 0; i < n; i++) {
  	used[v[i]]++;
  }
  bool flag = true;
  int ans = -1, cnt = 0;              
  for(int i = 0; i <= n; i++) {
  	if(used[i] == 0) {
      ans = i; break;
    }
    else if(used[i] == 1) {
      cnt++;
      if(cnt == 2) {
        ans = i; break;
      }
    }
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