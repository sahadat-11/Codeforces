//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   map<int, int> mp;
   int pre = -1;
   for(int i = 2; i <= n; i++) {
     if(v[i] != v[i - 1]) {
     	mp[i] = i - 1;
     	pre = i - 1;
     }
     else if(v[i] == v[i - 1]) {
     	mp[i] = pre;
     }
     else {
     	mp[i] = -1;
     }
   }
   // for(auto [x, y] : mp) {
   // 	 cout << x << " " << y << "\n";
   // }
   int q; cin >> q;
   while(q--) {
   	 int i, j; cin >> i >> j;
   	 int x = mp[j];
   	 if(x >= i) cout << mp[j] << " " << j << "\n";
   	 else cout << -1 << " " << -1 << "\n";
   }
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