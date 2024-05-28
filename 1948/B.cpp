//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   bool flag = true;
   int m = -1;
   for(int i = 0; i < n; i++) {
      if(m > v[i]) flag = false;
      else if(m <= v[i] / 10 and (v[i] / 10 <= v[i] % 10)) {
      	m = v[i] % 10;
      }
      else m = v[i];
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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