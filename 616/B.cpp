//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, m; cin >> n >> m; int a[n][m];
   for(int i = 0; i < n; i++) {
   	 for(int j = 0; j < m; j++) cin >> a[i][j];
   }
   int ans = 0;
   for(int i = 0; i < n; i++) {
   	 int mn = INT_MAX;
   	 for(int j = 0; j < m; j++) {
       mn = min(mn, a[i][j]);
   	 }
   	 ans = max(ans, mn);
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}