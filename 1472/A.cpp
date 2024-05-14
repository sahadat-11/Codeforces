//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, n; cin >> a >> b >> n;
   int cnt = 1;
   while(a % 2 == 0) {
   	cnt *= 2;
   	a /= 2;
   }
   while(b % 2 == 0) {
   	cnt *= 2;
   	b /= 2;
   }
  // cout << cnt << " ";
   if(n == 1 or cnt >= n) cout << "YES\n";
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