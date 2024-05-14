//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   string x = to_string(n);
   int first = (x[0] - '0');
   //cout << x << " " << first << " ";
   int ans = (first - 1) * 10;
   int dig = (int)x.size();
   ans += ((dig * (dig + 1)) / 2);
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