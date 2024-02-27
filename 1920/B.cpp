//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k, x; cin >> n >> k >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll sum = 0;
   for(int i = 0; i < n; i++) sum += v[i];
   sort(v.rbegin(), v.rend());
   ll ans = INT_MIN;
   ll neg = 0, minus = 0;
   for(int i = 0; i < x; i++) neg += v[i];
   ans = max(ans, sum - 2 * neg) ;
   for(int i = 0; i < k; i++) {
   	 if(i + x < n) neg += v[i + x];
   	  neg -= v[i], sum -= v[i], ans = max(ans, sum - 2 * neg);
   	 
   	 //cout << ans << " " << sum << " " << neg << "\n";
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}