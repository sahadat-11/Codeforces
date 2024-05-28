//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   int cnt = 1;
   n -= 2;
   if(n <= 0) cout << 1 << "\n";
   else {
   	cnt += (n + x - 1) / x;
   	cout << cnt << "\n";
   }

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