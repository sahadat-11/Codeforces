//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m; int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int x = 0;
    for (int i = 0; i < m; i++) {
      x |= b[i];
    }
    int xr = 0;
    for (int i = 0; i < n; i++) {
      xr ^= a[i];
    }
    int mn = xr, mx = xr;
    xr = 0;
    for (int i = 0; i < n; i++) {
      int y = x | a[i];
      xr ^= y;
    }
    mn = min(mn, xr), mx = max(mx, xr);
    cout << mn << " " << mx << "\n";
  }
  return 0;
}