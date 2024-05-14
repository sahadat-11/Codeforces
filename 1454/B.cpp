//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp, index;
   for(int i = 0; i < n; i++) {
     mp[v[i]]++;
     index[v[i]] = i + 1;
   }
   int ans = -1;
   for(auto [val, fre] : mp) {
     if(fre == 1) {
     	ans = index[val];
     	break;
     }
   }
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