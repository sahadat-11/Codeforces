//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n), ans;
   for(int i = 0; i < n; i++) cin >> v[i];
   int x = v[0];
   ans.push_back(0);
   for(int i = 1; i < n; i++) {
   	int sum = 0;
   	for(int bit = 0; bit < 31; bit++) {
   	 if(((1 << bit) & x)) {
   	 	sum += (1 << bit);
   	 }
   	 else if(((1 << bit) & v[i])) {
   	 	sum += (1 << bit);
   	 }
   	}
   	int xx = sum - v[i];
   	x = (v[i] ^ xx);
   	ans.push_back(xx);
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