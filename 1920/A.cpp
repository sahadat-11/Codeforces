//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   int mn = 0;
   int mx = INT_MAX;
   vector<int> v;
   while(n--) {
   	 int k, x; cin >> k >> x;
   	 if(k == 1) {
   	 	mn = max(mn, x);
   	 }
   	 else if(k == 2) {
   	 	mx = min(mx, x);
   	 }
   	 else {
   	 	v.push_back(x);
   	 }
   }
   int cnt = 0;
   for(auto u : v) {
   	 if(u >= mn and u <= mx) cnt++;
   }
   cout << max(0, mx - mn + 1 - cnt) << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}