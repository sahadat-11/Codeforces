//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int unsigned long long
void solve() {
   int n; cin >> n;
   int sum = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337)%mod;
   cout << sum << "\n";
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

// https://chat.openai.com/c/ec6ffec4-c2b2-4451-8083-7c1498426ab8