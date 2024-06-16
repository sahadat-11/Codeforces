//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m, k; cin >> n >> m >> k;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }

  vector<int> l(m + 1), r(m + 1), d(m + 1);
  for(int i = 1; i <= m; i++) {
  	cin >> l[i] >> r[i] >> d[i];
  }
  
  vector<int> apply(m + 2, 0);
  for(int i = 1; i <= k; i++) {
    int x, y; cin >> x >> y;
    apply[x]++; apply[y + 1]--;
  }
  
  vector<int> dif(n + 2, 0);
  for(int i = 1; i <= m; i++) {
    apply[i] += apply[i - 1];
    dif[l[i]] += apply[i] * d[i];
    dif[r[i] + 1] -= apply[i] * d[i];
  }

  for(int i = 1; i <= n; i++) {
  	dif[i] += dif[i - 1];
    a[i] += dif[i];
    cout << a[i] << " ";
  }
  return 0;
}
