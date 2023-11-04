//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; int a[n + 1], b[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   for(int i = 1; i <= n; i++) cin >> b[i];
   ll sum = 0;
   for(int i = 1; i <= n; i++) {
     if(b[i]) {
        sum += a[i];
        a[i] = 0;
     }
   }
   //cout << sum << "\n";
   //for(int i = 1; i <= n; i++) cout << a[i] << " ";
   ll pre[n + 1] = {0ll};
   for(int i = 1; i <= n; i++) {
     pre[i] = pre[i - 1] + a[i];
   }
   //for(int i = 1; i <= n; i++) cout << pre[i] << " ";
   ll mx = 0;
   for(int i = k; i <= n; i++) {
     mx = max(mx, pre[i] - pre[i - k]);
   }
   cout << sum + mx << "\n";
   return 0;
}
//https://prnt.sc/-RqbsRuMYcEo
