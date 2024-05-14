//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   int a = 0, b = 0, c = 0, d = 0;
   int a1 = 0, b1 = 0, c1 = 0, d1 = 0;
   for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      char ch; cin >> ch;
      if(ch == 'B') {
        if(i == 1) a = 1;
        if(i == n) b = 1;
        if(j == 1) c = 1;
        if(j == m) d = 1;
      }
      if(ch == 'W') {
        if(i == 1) a1 = 1;
        if(i == n) b1 = 1;
        if(j == 1) c1 = 1;
        if(j == m) d1 = 1;
      }
    }
   }
   if((a and b and c and d) or (a1 and b1 and c1 and d1)) {
    cout << "YES\n";
   }
   else {
    cout << "NO\n";
   }
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