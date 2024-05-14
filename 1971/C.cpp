//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c, d; cin >> a >> b >> c >> d;
   int mn1 = min(a, b);
   int mn2 = min(c, d);
   int mx1 = max(a, b);
   int mx2 = max(c, d);
   if((mn1 < mn2 and mx1 > mx2) or (mn1 > mn2 and mx1 < mx2) or (mn1 < mn2 and mx1 < mn2) or (mn1 > mn2 and mn1 > mx2)) {
   	cout << "NO\n";
   }
   else cout << "YES\n";
   // if((c > a and c < b) or (d > a and d < b) or (a > c and a < d) or (b > c and b < d)) {
   // 	 cout << "YES\n";
   // }
   // else cout << "NO\n";
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