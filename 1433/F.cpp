// In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m, k; cin >> n >> m >> k;
   vector<int> v[n];
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
   	  int x; cin >> x;
   	  v[i].push_back(x);
   	}
   }
   for(int i = 0; i < n; i++) {
   	sort(v[i].rbegin(), v[i].rend());
   }
   // for(int i = 0; i < n; i++) {
   // 	for(int j = 0; j < m; j++) {
   // 	  cout << v[i][j] << "  ";
   // 	}
   // 	cout << "\n";
   // }
   int sum = 0;
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m / 2; j++) {
   	  sum += v[i][j];
   	}
   }
   cout << sum << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}