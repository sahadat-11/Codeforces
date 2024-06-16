//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   int sum_a = 0, sum_b = 0;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     sum_a += a[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> b[i];
     sum_b += b[i];
   }
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   int ans = INT_MAX;
   int x = a[0] * n + sum_b;
   int y = b[0] * n + sum_a;
   cout << min(x, y) << "\n";
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