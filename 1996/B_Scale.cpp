//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
  int n, k; cin >> n >> k;
  char a[n + 1][n + 1];
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        cin >> a[i][j];
    }
  }
  for(int i = k; i <= n; i += k) {
    for(int j = k; j <= n; j += k) {
        cout << a[i][j];
    }
    cout << "\n";
  }
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