//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
   	 cin >> v[i];
     mp[v[i]]++;
   }
   bool flag = true;
   for(auto [val, fre] : mp) {
   	if(fre == 1) flag = false;
   }
   vector<int> ans;
   for(int i = 1; i <= n; i++) ans.push_back(i);
   for(int i = 1; i < n; i++) {
     if(v[i] == v[i - 1]) swap(ans[i - 1], ans[i]);
   }
   if(!flag) cout << "-1\n";
   else {
   	for(auto u : ans) cout << u << " "; cout << "\n";
   }
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