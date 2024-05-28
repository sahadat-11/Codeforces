//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m, k; cin >> n >> m >> k;
   vector<int> v1(n), v2(m);
   for(int i = 0; i < n; i++) cin >> v1[i];
   for(int i = 0; i < m; i++) cin >> v2[i];
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
   	  if(v1[i] + v2[j] <= k) cnt++;
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