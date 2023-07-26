//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  double a, b; cin >> a >> b;
  int q; cin >> q;
  double ans = 1e9;
  while(q--) {
    double x, y, v; cin >> x >> y >> v;
    double s = sqrtl((abs(a - x) * abs(a - x)) + abs(b - y) * abs(b - y));
    double time = s / v;
    ans = min(ans, time);
  }
  cout << fixed << setprecision(20) << ans << "\n";
  return 0;
}
