//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, x; cin >> n >> x; int a[n];
   for(int i = 0; i < n; i++) {
      cin >> a[i];
   }
   sort(a, a + n);
   ll ans = 0;
   for(int i = 0; i < n; i++) {
      ans += (1ll * x * a[i]);
      x = max(x - 1, 1);
   }
   cout << ans << "\n";
   return 0;
}
