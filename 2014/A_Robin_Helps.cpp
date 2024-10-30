//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   int x = 0, zero = 0;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     if(a[i] >= k) x += a[i];
     if(a[i] == 0) zero++;
   }
   cout << min(x, zero) << "\n";
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