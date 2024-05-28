//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   bool flag = false;
   for(int i = 0; i < n; i++) {
   	int a, b, c, d; cin >> a >> b >> c >> d;
   	if(b == c) flag = true;
   }
   if(m % 2) flag = false;
   if(flag) cout << "YES\n";
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