//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x, n; cin >> x >> n;
   for(int i = 1; i <= n; i++) {
    if(x & 1) {
      x += i;
    }
    else x -= i;
    cout << x << "\n";
   }
   // int jump = 0;
   // if(n % 4 == 0) jump = 0;
   // if(n % 4 == 1) jump = -n;
   // if(n % 4 == 2) jump = 1;
   // if(n % 4 == 3) jump = n + 1;
   // if(x & 1) cout << x - jump << "\n";
   // else cout << x + jump << "\n";
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