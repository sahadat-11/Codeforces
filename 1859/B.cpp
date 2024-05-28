//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v[n];
   for(int i = 0; i < n; i++) {
   	int m; cin >> m;
   	for(int j = 0; j < m; j++) {
   	  int x; cin >> x;
      v[i].push_back(x);
   	}
   }
   for(int i = 0; i < n; i++) {
   	 sort(v[i].begin(), v[i].end());
   }
   int fst_mn = INT_MAX, sec_mn = INT_MAX, sec_mn_sum = 0;
   for(int i = 0; i < n; i++) {
   	fst_mn = min(fst_mn, v[i][0]);
   	sec_mn = min(sec_mn, v[i][1]);
   	sec_mn_sum += v[i][1];
   }
   cout << fst_mn + sec_mn_sum - sec_mn << "\n";
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