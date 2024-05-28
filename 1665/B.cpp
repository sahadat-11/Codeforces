//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   int mx = 1, cnt = 1;
   for(int i = 1; i < n; i++) {
   	if(v[i] == v[i - 1]) {
   	  cnt++;
   	  mx = max(mx, cnt);
   	}
   	else cnt = 1;
   }
   int ans = (n - mx) / mx + (n - mx) / mx * mx;
   if((n - mx) % mx) {
   	 ans += (n - mx) % mx;
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