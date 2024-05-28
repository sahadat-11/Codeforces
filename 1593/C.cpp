//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x, n; cin >> x >> n;
   vector<int> v(n), dif(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     dif[i] = x - v[i];
   }
   sort(dif.begin(), dif.end());
   //for(auto u : dif) cout << u << " "; cout << "\n";
   int cnt = 0;
   for(int i = 0; i < n; i++) {
      if(x > dif[i]) cnt++, x -= dif[i];
      else break;
   }
   cout << cnt << "\n";
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