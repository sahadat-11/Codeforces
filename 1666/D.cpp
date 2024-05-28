//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s, t; cin >> s >> t;
   map<char, int > mp;
   for(auto u : t) mp[u]++;
   string ans;
   for(int i = (int)s.size() - 1; i >= 0; i--) {
   	if(mp[s[i]]) {
   		ans.push_back(s[i]);
   		mp[s[i]]--;
   	}
   }
   reverse(ans.begin(), ans.end());
   if(t == ans) cout << "YES\n";
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