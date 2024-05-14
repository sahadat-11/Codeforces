//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     mp[v[i]]++;
   }
   for(int i = 0; i < n; i++) {
   	if(mp[v[i] + k]) {
   	  cout << "YES\n"; return;
   	}
   }
   cout << "NO\n";
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
// https://prnt.sc/uaBusrjPV6iL