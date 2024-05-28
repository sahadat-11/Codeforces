//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   if(n == 1 or m == 1) cout << "YES\n";
   else {
      	for(int i = 2; i * i <= n; i++) {
   		  if(n % i == 0 and i <= m) {
   		  cout << "NO\n"; return;
   		}
   	 }
   	 if(n <= m and n != 1) cout << "NO\n";
   	 else cout << "YES\n";
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