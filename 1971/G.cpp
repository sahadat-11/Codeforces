//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }

   map<int, vector<int>> mp1, mp2;
   for(int i = 0; i < n; i++) {
   	mp1[a[i] >> 2].push_back(a[i]);
   	mp2[a[i] >> 2].push_back(i);
   }

   vector<int> ans(n);
   for(auto [val, vec] : mp1) {
     sort(vec.begin(), vec.end());
     int c = 0;
     for(auto y : vec) {
     	ans[mp2[val][c++]] = y;
     }
   }

   for(auto u : ans) cout << u << " ";
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