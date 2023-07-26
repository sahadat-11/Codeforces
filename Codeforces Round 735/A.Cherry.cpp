//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   ll mx = INT_MIN;
   for(int i = 1; i < n; i++) {
      mx = max(mx, 1ll* a[i] * a[i - 1]);
   }
   cout << mx << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     solve();
   }
    return 0;
}
