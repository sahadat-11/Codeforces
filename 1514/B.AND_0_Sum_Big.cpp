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
    ll ans = 1;
    for(int i = 0; i < k; i++) {
      ans *= n;
      ans %= mod;
    }
    cout << ans << "\n";
  }
  return 0;
}
// https://prnt.sc/LrURp3AyuPWV
//https://prnt.sc/eSflAxAho4G4