//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; string s; cin >> n >> k >> s;
   int odd = 0;
   map<char, int> mp;
   for(auto u : s) mp[u]++;
   for(auto u : mp) {
   	if(u.second % 2) odd++;
   }
   if(odd - k <= 1) cout << "YES\n";
   else cout << "NO\n";
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