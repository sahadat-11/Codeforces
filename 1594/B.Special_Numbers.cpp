//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    ll ans = 0, x = 1;
    for(int i = 0; i < 31; i++) {
      if(k & (1 << i)) {
        ans += x;
        ans %= mod;
      }
      x *= n;
      x %= mod;
    }
    cout << ans << "\n";
  }
  return 0;
}
