//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    ll n, k; cin >> n >> k;
    for(int i = 1; i < k; i++) {
      ll x = n;
      ll mx = INT_MIN, mn = INT_MAX;
      while(x) {
        mx = max(mx, x % 10);
        mn = min(mn, x % 10);
        x /= 10;
      }
      if(mx == 0 or mn == 0) break;
      n += mn * mx;
    }
    cout << n << "\n";
  }
  return 0;
}