//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int q; cin >> q;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  vector<int> dif(n + 2, 0);
  while(q--) {
  	int l, r; cin >> l >> r;
  	dif[l]++;
  	dif[r + 1]--;
  }
  for(int i = 1; i <= n; i++) {
  	dif[i] += dif[i - 1];
  }
  sort(dif.rbegin(), dif.rend());
  sort(a.rbegin(), a.rend());
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i] * dif[i];
  }
  cout << sum << "\n";
  return 0;
}
