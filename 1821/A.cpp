//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int x = 0;
   if(s[0] == '?') x = 9;
   else if(s[0] != '0') x = 1;
   for(int i = 1; i < (int)s.size(); i++) {
   	if(s[i] == '?') x *= 10;
   }
   cout << x << "\n";
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