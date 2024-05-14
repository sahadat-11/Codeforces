//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   int a[n][n];
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < n; j++) cin >> a[i][j];
   }
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < n; j++) {
   	  if(a[i][j] != a[n - i - 1][n - j - 1]) cnt++;
   	}
   }
   cnt /= 2;
   if(k >= cnt and ((n & 1) or (k - cnt) % 2 == 0)) {
   	cout << "YES\n";
   }
   else cout << "NO\n";
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