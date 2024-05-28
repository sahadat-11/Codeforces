//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x, y; cin >> n >> x >> y;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<pair<int, int>, int> mp;
   int cnt = 0;
   // for(int i = 0; i < n; i++) {
   // 	 for(int j = i + 1; j < n; j++) {
   // 	 	if((v[i] + v[j]) % x == 0 and ((v[i] - v[j]) % y + y) % y == 0) {
   // 	 	  cnt++;
   // 	 	}
   // 	 }
   // }
   for(int i = 0; i < n; i++) {
   	 int a = v[i] % x;
   	 int b = v[i] % y;
   	 cnt += mp[{(x - (v[i] % x)) % x, v[i] % y}];
   	 mp[{a, b}]++;
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