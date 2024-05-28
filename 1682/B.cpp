//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n), vv;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   for(int i = 0; i < n; i++) {
     if(i != v[i]) {
     	vv.push_back(v[i]);
     }
   }
   int AND = vv[0];
   for(int i = 1; i < (int)vv.size(); i++) {
   	AND = (AND & vv[i]);
   }
   cout << AND << '\n';
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