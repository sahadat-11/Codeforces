//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a, b;
   for(int i = 1; i <= n; i += 2) {
    a.push_back(i);
   }
   for(auto u : a) {
     int x = u;
     while(x * 2 < n) {
       b.push_back(u * 2);
       x *= 2;
     }
   }
   for(auto u : a) cout << u << " ";
   for(auto u : b) cout << u << " ";
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