//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;  // X = a * 11 + b * 111 
                     // x - b * 111 = a * 11;
   for(int b = 0; b * 111 <= n; b++) {
   	if((n - b * 111) % 11 == 0) {
   	  cout << "YES\n"; return;
   	}
   }
   cout << "NO\n";
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