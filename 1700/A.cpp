//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   int sum1 = m * (m + 1) / 2;
   int sum2 = 0;
   for(int i = 2; i <= n; i++) {
   	sum2 += (i - 1) * m + m;
   }
   //cout << sum1 << " " << sum2 << "\n";
   cout << sum1 + sum2 << "\n";
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