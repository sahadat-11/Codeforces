//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int mx1 = INT_MIN, mn1 = INT_MAX, mx2 = INT_MIN, mn2 = INT_MAX;
   for(int i = 0; i < 4; i++) {
   	 int x, y; cin >> x >> y;
   	 mx1 = max(mx1, x);
   	 mn1 = min(mn1, x);
   	 mx2 = max(mx2, y);
   	 mn2 = min(mn2, y);
   }
   cout << 1ll * (mx1 - mn1) * (mx2 - mn2) << "\n";
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