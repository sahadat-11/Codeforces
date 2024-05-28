//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> a(n), b(n), c(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> b[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> c[i];
   }
   int ans = 0;
   for(int i = 0; i < n; i++) {
     if((x | a[i]) != x) break;
     ans |= a[i];
   }
   for(int i = 0; i < n; i++) {
     if((x | b[i]) != x) break;
     ans |= b[i];
   }
   for(int i = 0; i < n; i++) {
     if((x | c[i]) != x) break;
     ans |= c[i];
   }
   if(ans == x) cout << "YES\n";
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