//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int one = count(s.begin(), s.end(), '1');
   int zero = count(s.begin(), s.end(), '0');
   int mn = min(one, zero);
   if(mn % 2) cout << "DA\n";
   else cout << "NET\n";
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