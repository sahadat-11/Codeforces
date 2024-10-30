//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];

   }
   int ans = 0, sum = 0;
   sort(a.begin(), a.end());
   int j = 0;
   for(int i = 0; i < n; i++) {
    sum += a[i];
    while(j < n and (sum > k or abs(a[i] - a[j]) > 1)) {
        sum -= a[j];
        j++;
    }
    ans = max(ans, sum);
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