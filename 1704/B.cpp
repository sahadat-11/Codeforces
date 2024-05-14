//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int l = v[0] - x, r = v[0] + x;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	l = max(l, v[i] - x), r = min(r, v[i] + x);
   	if(l > r) {
   	  cnt++;
   	  l = v[i] - x; r = v[i] + x;
   	}
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