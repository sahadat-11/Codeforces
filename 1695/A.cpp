//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int r, c; cin >> r >> c;
   int a[r + 1][c + 1];
   int mx = INT_MIN, max_x = 0, max_y = 0;
   for(int i = 1; i <= r; i++) {
   	for(int j = 1; j <= c; j++) {
   	  cin >> a[i][j];
      if(a[i][j] > mx) {
      	mx = a[i][j];
      	max_x = max(i, r - i + 1);
      	max_y = max(j, c - j + 1);
      }
   	}
   }
   cout << max_x * max_y << "\n";
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