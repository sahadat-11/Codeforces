//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int l = 0, r = 0, u = 0, d = 0;
   while(n--) {
   	 int x, y; cin >> x >> y;
   	 if(x > 0) r++;
   	 if(y > 0) u++;
   	 if(x < 0) l++;
   	 if(y < 0) d++;
   }
   if((l and r) and (u and d)) cout << "NO\n";
   else cout << "YES\n";
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