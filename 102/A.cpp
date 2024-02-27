//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int c[101][101];
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   while(q--) {
   	 int x, y; cin >> x >> y;
   	 x--; y--;
   	 c[x][y] = 1;
   	 c[y][x] = 1;
   }
   int ans = 1e18;
   for(int i = 0; i < n; i++) {
   	 for(int j = i + 1; j < n; j++) {
   	 	for(int k = j + 1; k < n; k++) {
   	 		if(c[i][j] and c[i][k] and c[j][k]) {
   	 			ans = min(ans, v[i] + v[j] + v[k]);
   	 		}
   	 	}
   	 }
   }
   if(ans == 1e18) ans = -1;
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}