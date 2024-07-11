//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m, c; cin >> n >> m >> c;
  vector<int> a(n + 1), b(m + 1);
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  for(int i = 1; i <= m; i++) {
  	cin >> b[i];
  }
  vector<int> dif(2 * n + 2, 0);
  for(int i = 1; i <= m; i++) {
    dif[i] += b[i];
    dif[i + n - m + 1] -= b[i];
  }
  for(int i = 1; i <= n; i++) {
  	dif[i] += dif[i - 1];
    a[i] = ((a[i] + dif[i]) % c + c) % c;
    cout << a[i] % c << " ";
  }
  return 0;
}
