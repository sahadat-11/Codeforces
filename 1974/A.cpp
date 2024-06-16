//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x, y; cin >> x >> y;
   int ans = (y + 1) / 2;
   int xx = ans * 7;
   if(y & 1) xx += 4;
   if(xx < x) {
   	int xy = x - xx;
   	ans += (xy + 14) / 15;
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