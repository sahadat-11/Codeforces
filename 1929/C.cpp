//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int k, x, a; cin >> k >> x >> a;
   int s = 1;
   for(int i = 0; i < x; i++) {
   	 s += s / (k - 1) + 1;
   	 if(s > a) {
   	 	cout << "NO\n"; return;
   	 }
   }
   cout << "YES\n";
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