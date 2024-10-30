//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, sum = 0, ans = 0;
  for(int r = 0; r < n; r++) {
     sum += a[r];
     while(sum > x) {
        sum -= a[l];
        l++;
     }
     ans = max(ans, r - l + 1);
  }
  cout << ans << "\n";
  return 0;
}
