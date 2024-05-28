//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   int cnt = 0; bool flag = true;
   for(int i = n - 1; i >= 1; i--) {
   	if(v[i] > v[i + 1]) {
   	   int x = __builtin_popcount(i);
   	   if(x != 1) flag = false;
   	}
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