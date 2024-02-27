//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; string s; cin >> n >> s;
   ll ans = 0;
   for(int i = 0; i < n; i++) {
   	 if((s[i] - '0') % 2 == 0) ans += (i + 1);
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

