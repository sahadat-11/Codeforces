//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, m, k; cin >> n >> m >> k;
   string s[n]; vector<int> value(n);
   for(int i = 0; i < n; i++) cin >> s[i];
   for(int i = 0; i < n; i++) cin >> value[i];
   map<string, int> mp;
   for(int i = 0; i < n; i++) {
   	 mp[s[i]] = value[i];
   }
   //for(auto [u, v] : mp) cout << u << " " << v << endl;
   while(m--) {
   	int x; cin >> x; vector<int> vv(x);
   	for(int i = 0; i < x; i++) cin >> vv[i];
   	//for(int i = 0; i < x; i++) cout << vv[i] << endl;
   	int mn = INT_MAX;
    for(int i = 0; i < x; i++) {
      mn = min(mn, mp[s[vv[i] - 1]]);
    }
    //cout << mn << endl;
    for(int i = 0; i < x; i++) {
      mp[s[vv[i] - 1]] = mn;
    }
   }
   //for(auto [u, v] : mp) cout << u << " " << v << endl;
   ll ans = 0;
   while(k--) {
   	 string ss; cin >> ss;
   	 ans += mp[ss];
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}