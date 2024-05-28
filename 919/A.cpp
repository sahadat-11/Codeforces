//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   double mn = 1000.0;
   while(n--) {
   	int a, b; cin >> a >> b;
   	double x = 1.0* a / b;
   	mn = min(mn, x);
   }
   //cout << mn << "\n";
   cout << fixed << setprecision(8) << mn * m << "\n";
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