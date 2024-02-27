//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0;
   for(int i = 1; i < n; i++) {
   	int mx = max(v[i], v[i - 1]);
   	int mn = min(v[i], v[i - 1]);
   	while(2 * mn < mx) {
   	 mn *= 2;
   	 cnt++;
   	}
   }
   cout << cnt << "\n";
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