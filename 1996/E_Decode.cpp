//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   int cnt = 0;
   map<int, int> mp;
   int ans = 0;
   mp[0] = 1;
   for(int i = 0; i < n; i++) {
     if(s[i] == '1') cnt++;
     else cnt--;
     ans += (mp[cnt] * (n - i)) % mod;
     ans %= mod;
     mp[cnt] +=  i + 2;
     mp[cnt] %= mod;
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