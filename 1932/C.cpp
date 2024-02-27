//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> v(n); 
   for(int i = 0; i < n; i++) cin >> v[i];
   string s; cin >> s;
   int pro = 1;
   vector<int> ans;
   for(int i = 0; i < n; i++) {
   	 pro = (pro * v[i]) % m;
   }
   ans.push_back(pro % m);
   int l = 0, r = n - 1;
   for(int i = 0; i < n - 1; i++) {
     if(s[i] == 'L') {
     	pro /= v[l++];
     	ans.push_back(pro % m);
     }
     else {
        pro /= v[r--];
     	ans.push_back(pro % m);
     }
   }
   for(auto u : ans) cout << u << " "; cout << "\n";
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