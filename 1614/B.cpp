//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   sort(v.rbegin(), v.rend());
   vector<int> ans;
   ans.push_back(0);
   bool flag = true;
   int x = 1, sum = 0;
   for(int i = 0; i < n; i++) {
     if(flag) {
      ans.push_back(x);
      sum += 2 * x * v[i];
     }
     else {
      ans.push_back(-x);
      sum += 2 * x * v[i];
      x++;
     }
     flag ^= true;
   }
   cout << sum << "\n";
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