//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int gcd = 0;
   for(int i = 0; i < n; i++) {
   	gcd = __gcd(gcd, v[i]);
   }
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	if(gcd == v[i]) cnt++;
   }
   if(cnt > 1) cout << "NO\n";
   else cout << "YES\n";
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