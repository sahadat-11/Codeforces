//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX = 2e14;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a, a + n);
   ll ans = MAX;
   for(int c = 1; ; c++) {
      vector<__int128> c_pow(n);
      ll cost = 0;
      c_pow[0] = 1;
      for(int i = 1; i < n; i++) {
         c_pow[i] = c_pow[i - 1] * c;
      }
      if(c_pow[n - 1] > MAX) break;
      for(int i = 0; i < n; i++) {
        cost += abs(a[i] - (ll)c_pow[i]);
        if(cost > MAX) break;
      }
      ans = min(ans, cost);
   }
   cout << ans << "\n";
   return 0;
}

// https://prnt.sc/nJJZE1_Ca4KW
// https://prnt.sc/N9vahwmzv9Fa