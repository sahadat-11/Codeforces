//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     v[i] %= k;
     if(v[i] == 0) v[i] = k;
   }
   vector<pair<int, int>> vv;
   for(int i = 0; i < n; i++) {
    vv.push_back({-v[i], i + 1}); 
   }
   sort(vv.begin(), vv.end());
   for(int i = 0; i < n; i++) {
    cout << vv[i].second << " "; 
   }
   cout << "\n";
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