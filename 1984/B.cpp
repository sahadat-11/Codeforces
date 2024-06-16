//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  string s; cin >> s;
  int n = s.size();
  bool flag = true;
  if(s[0] != '1') flag = false;
  if(s[n - 1] == '9') flag = false;
  for(int i = 1; i < n - 1; i++) {
    if(s[i] == '0') flag = false;
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
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