//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> a(n), pre(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   sort(a.begin(), a.end());
   pre[0] = a[0];
   for(int i = 1; i < n; i++) {
     pre[i] = pre[i - 1] + a[i];
   }
   int ans = 0;
   for(int i = 0; i < n; i++) {
   	int temp = (i + 1 + x - pre[i]) / (i + 1);
   	ans += max(0ll, temp);
   }
   cout << ans << "\n";
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