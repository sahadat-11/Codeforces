//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
   int cnt = abs(a - c) + abs(b - d);
   if(a == c and a == e) {
     if(f > b and f < d) cnt += 2;
     if(f < b and f > d) cnt += 2;
   }
   if(b == d and b == f) {
     if(e > a and e < c) cnt += 2;
     if(e < a and e > c) cnt += 2;
   }
   cout << cnt << "\n";
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