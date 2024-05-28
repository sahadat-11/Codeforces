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



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
int binexp(int a, int b) {
  int ans = 1;
  while(b) {
    if(b & 1) { // if b in odd
      ans = (ans * 1ll * a) % mod; // type cast for integer overflow
    }
    a = (a * 1ll * a) % mod;
    b >>= 1; // if b in odd(if 0th bit is set)
  }
  return ans;
}
void solve() {
   int n, k; cin >> n >> k;
   cout << binexp(n, k) << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


// https://prnt.sc/LrURp3AyuPWV
// https://prnt.sc/eSflAxAho4G4
// https://prnt.sc/agho3qVPmClr