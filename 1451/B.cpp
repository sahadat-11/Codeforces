//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; string s; cin >> n >> q >> s;
   while(q--) {
   	int l, r; cin >> l >> r;
   	l--; r--;
   	int o = 0, z = 0;
   	for(int i = l; i <= r; i++) {
   	  if(s[i] == '0') z++;
   	  else o++;
   	}
   	int x = 0, y = 0;
   	for(int j = 0; j < l; j++) {
   	  if(s[j] == s[l]) x++;
   	}
   	for(int j = r + 1; j < n; j++) {
   	  if(s[j] == s[r]) y++;
   	}
   	if(x >= 1 or y >= 1) cout << "YES\n";
   	else cout << "NO\n";
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