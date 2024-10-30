//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c, d; cin >> a >> b >> c >> d;
   int ans = 0;
   if(a > c and b > d) ans++;
   if(a > d and b > c) ans++;
   cout << ans * 2 << "\n";
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