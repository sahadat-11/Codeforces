//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int cnt = 0, ans = INT_MAX;
   for(int i = 0; i < n; i++) {
     if(v[i] == v[0]) cnt++;
     else {
     	ans = min(ans, cnt); cnt = 0;
     }
   }
   ans = min(ans, cnt);
   if(ans == n) ans = -1;
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