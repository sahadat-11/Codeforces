//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b; cin >> a >> b;
   if(a == b) {
   	cout << 0 << " " << 0 << "\n";
   	return;
   }
   int g = abs(a - b);
   int mn = min(a % g, g - a % g);
   cout << g << " " << mn << "\n";
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