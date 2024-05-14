//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   string a, b; cin >> a >> b;
   bool flag = true;
   for(int i = 0; i < n - 1; i++) {
   	if(a[i] != '>' and b[i] != '>') flag = false;
   }
   if(a[n - 1] != '>' and b[n- 2] != '>') flag = false;
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