//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
    mp[a[i]]++;
   }
   vector<int> v;
   for(auto [val, fre] : mp) {
    if(fre == 1) v.push_back(val);
   }
   // for(auto u : v) cout << u << " ";
   // cout << "\n";
   int sz = v.size();
   
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