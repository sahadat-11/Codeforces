//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {  
   int n, m; string s; cin >> n >> m >> s;
   vector<int> cnt(7, 0);
   for(int i = 0; i < n; i++) {
   	cnt[s[i] - 'A']++;
   }
   int ans = 0;
   for(int i = 0; i < 7; i++) {
   	//cout << cnt[i] << " ";
   	if(cnt[i] < m) {
   	  ans += (m - cnt[i]);
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