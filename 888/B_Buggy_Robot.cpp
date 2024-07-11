//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int l = 0, r = 0, u = 0, d = 0;
   for(int i = 0; i < n; i++) {
    if(s[i] == 'U') u++;
    if(s[i] == 'D') d++;
    if(s[i] == 'L') l++;
    if(s[i] == 'R') r++;
   }
   cout << 2 * min(l, r) + 2 * min(u, d) << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}