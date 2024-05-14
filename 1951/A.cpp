//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int one = count(s.begin(), s.end(), '1');
   bool flag = true;
   if(one % 2) flag = false;
   else if(one == 2) {
   	for(int i = 1; i < n; i++) {
   	  if(s[i] == s[i - 1] and s[i] == '1') flag = false;
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