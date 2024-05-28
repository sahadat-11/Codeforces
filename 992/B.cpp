//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int l, r, x, y; cin >> l >> r >> x >> y;
   if(y % x) {
   	 cout << "0\n";
   	 return;
   }
   int n = y / x;
   int cnt = 0;
   for(int d = 1; d * d <= n; d++) {
   	if(n % d == 0) {
   	  int c = n / d;
   	  if(d * x >= l and d * x <= r and c * x >= l and c * x <= r and (__gcd(d, c) == 1)) {
   	  	if(c != d) cnt += 2;
   	  	else cnt++;
   	  }
   	}
   }
   cout << cnt << "\n";
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

// https://prnt.sc/OlGpvvPpScAV