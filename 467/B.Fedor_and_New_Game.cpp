//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m, k; cin >> n >> m >> k; int a[m + 1];
   for(int i = 0; i <= m; i++) cin >> a[i];
   int cnt = 0;
   for(int i = 0; i < m; i++) {
      int x = __builtin_popcount(a[m] ^ a[i]);// contain(a[m] and a[i]) differnt bit;
      if(x <= k) cnt++;
   }
   cout << cnt << "\n";
   return 0;
}
//https://prnt.sc/eo6wqqd1Fz7-