//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x, k; cin >> x >> k;
   if(x % k) {
   	cout << 1 << "\n";
   	cout << x << "\n";
   }
   else {
   	cout << 2 << "\n";
   	cout << x - 1 << " " << 1 << "\n";
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