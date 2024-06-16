//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> b[i];
   }
   int m; cin >> m;
   vector<int> c(m);
   map<int, int> mp;
   for(int i = 0; i < m; i++) {
     cin >> c[i];
     mp[c[i]]++;
   }
   for(int i = 0; i < n; i++) {
   	if(a[i] != b[i]) {
   	  if(mp[b[i]] <= 0) {
   	  	cout << "NO\n"; return;
   	  }
   	  mp[b[i]]--;
   	}
   }
   cout << "YES\n";
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