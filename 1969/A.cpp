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
     mp[i + 1] = v[i];
   }
   for(auto [val, fre] : mp) {
     int x = mp[fre];
     if(x == val) {
     	cout << 2 << "\n"; return;
     }
   }
   cout << 3 << "\n";
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