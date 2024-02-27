//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c; cin >> a >> b >> c;
   if((2 * b - c) % a == 0 and 2 * b - c > 0) {
   	 cout << "YES\n";
   }
   else if(((a + c) % (2 * b) == 0) and a + c > 0) {
   	cout << "YES\n";
   }
   else if((2 * b - a) % c == 0 and 2 * b - a > 0) {
   	cout << "YES\n";
   }
   else cout << "NO\n";
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