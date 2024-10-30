//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int lcmfind(int a, int b) {
    return a / (__gcd(a, b)) * b;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0, g = 0;
  for(int i = 0; i < n; i++) {
    ans = __gcd(ans, lcmfind(g, a[i]));
    g = __gcd(g, a[i]);
  }
  cout << ans << "\n";
  return 0;
}

// O(N * N)