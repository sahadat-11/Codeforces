//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, q; cin >> n >> k >> q;
   vector<int> a(k + 1, 0), b(k + 1, 0);
   for(int i = 1; i <= k; i++) {
     cin >> a[i];
   }
   for(int i = 1; i <= k; i++) {
     cin >> b[i]; 
   } 
   while(q--) {
      int d; cin >> d;
      int p = upper_bound(a.begin(), a.end(), d) - a.begin() - 1;
      double dis = d - a[p];
      dis *= (b[p + 1] - b[p]);
      dis /= a[p + 1] - a[p];
      cout << (int)(b[p] + dis) << ' ';
   }
   cout << "\n";
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