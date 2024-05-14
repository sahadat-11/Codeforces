//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x; cin >> x;
   // int mx = 0, g = 0, mxx;
   // for(int i = 1; i < x; i++) {
   // 	g = __gcd(i, x);
   // 	if(g + i >= mx) {
   // 	 mx = g + i;
   // 	 mxx = i;
   // 	}
   // }
   cout << x - 1 << "\n";
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