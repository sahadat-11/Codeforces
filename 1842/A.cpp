//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   int sum1 = 0, sum2 = 0;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     sum1 += a[i];
   }
   for(int i = 0; i < m; i++) {
     cin >> b[i];
     sum2 += b[i];
   }
   //cout << sum1 << " " << sum2 << "\n";
   if(sum1 > sum2) cout << "Tsondu\n";
   else if(sum1 < sum2) cout << "Tenzing\n";
   else cout << "Draw\n";
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