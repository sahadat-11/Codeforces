//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int c = 0, ans = 0;
   for(int i = 0; i < n; i++) {
    if(s[i] == '(') {
    	c++;
    } 
    else {
       c--;
       if(c < 0) {
       	 c = 0;
       	 ans++;
       }
    }
   }
   cout << ans << "\n";
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