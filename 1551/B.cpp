//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   map<char, int> mp;
   for(auto u : s) mp[u]++;
   int cnt = 0, dif = 0;
   for(auto [u, v] : mp) {
   	if(v >= 2) cnt++;
   	else dif++;
   }
   cnt += (dif / 2);
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