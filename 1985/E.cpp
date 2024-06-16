//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c, vol; cin >> a >> b >> c >> vol;
   int ans = 0;
   for(int i = 1; i <= a; i++) {
   	for(int j = 1; j <= b; j++) {
   	  if(i * j > vol) continue;
   	  if(vol % (i * j)) continue;
   	  int k = (vol / (i * j));
   	  if(k > c) continue;
      int x = (a - i + 1) * (b - j + 1) * (c - k + 1);
      ans = max(ans, x);
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