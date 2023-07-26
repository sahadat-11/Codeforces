//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n;
  int sum = 0;
  int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
  while(n--) {
     int a, b; cin >> a >> b;
     if(a == 0 and b <= 0) x1 = max(x1, abs(b));
     if(a == 0 and b >= 0) x2 = max(x2, abs(b));
     if(b == 0 and a <= 0) y1 = max(y1, abs(a));
     if(b == 0 and a >= 0) y2 = max(y2, abs(a));
  }
  //cout << x1 << " " << x2 << " " << y1 << " " << y2;
  cout << 2 * (x1 + x2 + y1 + y2) << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
} 

// approach 2:
#include <bits/stdc++.h>
using namespace std;
void solve() {
  int ans = 0, minx = 0, miny = 0, maxx = 0, maxy = 0;
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int x, y;
    cin >> x >> y;
    minx = min(x, minx);
    miny = min(y, miny);
    maxx = max(x, maxx);
    maxy = max(y, maxy);
  }
  ans = 2 * (maxx + maxy - minx - miny);
  cout << ans << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}