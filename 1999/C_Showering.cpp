//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, s, m; cin >> n >> s >> m;
   bool flag = false;
   int last = 0;
   for(int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    if(a - last >= s) {
      flag = true;
    }
    last = b;
   }
   if(m - last >= s) {
    flag = true;
   }
   if(flag) {
    cout << "YES\n";
   }
   else {
    cout << "NO\n";
   }
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