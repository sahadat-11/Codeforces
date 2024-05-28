//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   int x = 0;
   for(int i = 0; i < k; i += 2) {
   	 for(int j = i; j < n; j += k) {
   	 	v[j] = ++x;
   	 }
   }
   x = n;
   for(int i = 1; i < k; i += 2) {
   	 for(int j = i; j < n; j += k) {
   	 	v[j] = x--;
   	 }
   }
   for(auto u : v) cout << u << " "; cout << "\n";
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