//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   map<int, int> mp;
   bool flag = false;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     v[i] %= k;
     if(v[i]) mp[v[i]]++;
     else flag = true;
   }
   int cnt = 0;
   if(flag) cnt = 1;
   vector<bool> used(k + 1);
   for(auto [val, fre] : mp) {
     int mx = max(fre, mp[k - val]);
     int mn = min(fre, mp[k - val]);
     if(!used[val]) {
     	cnt += max(mx - mn, 1ll);
     }
     used[val] = true, used[k - val] = true;
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