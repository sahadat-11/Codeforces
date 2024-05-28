//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   map<char, int> mp;
   for(auto u : s) mp[u]++;
   int ans = mod;
   for(auto [ch, oc] : mp) {
       int l = 0, r = n - 1;
       int cnt = 0;
       bool flag = true;
	   while(l <= r) {
	   	 if(s[l] == s[r]) {
	   	 	l++; r--;
	   	 }
	   	 else if(s[l] == ch) {
	   	   l++; cnt++;
	   	 }
	   	 else if(s[r] == ch) {
	   	   r--; cnt++;
	   	 }
	   	 else {
	   	  cnt = mod; break;
	   	 }
	   }
	   ans = min(ans, cnt);
   }
   if(ans == mod) ans = -1;
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