//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
  string a, b; cin >> a >> b;
  int mx = 0;
  for(int i = 0; i < b.size(); i++) {
    int cnt = 0, u = i;
    for(int j = 0; j < a.size(); j++) {
      if(a[j] == b[u]) {
        cnt++; u++;
      }
    }
    mx = max(mx, cnt);
  }
  cout << a.size() + b.size() - mx << "\n";
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