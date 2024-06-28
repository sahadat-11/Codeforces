//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int o = 0, z = 0;
   for(int i = 0; i < n; i++) {
     cin >> b[i];
     if(b[i] == 0) z++;
     else o++;
   }
   if(o and z) cout << "YES\n";
   else if(is_sorted(a.begin(), a.end())) cout << "YES\n";
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