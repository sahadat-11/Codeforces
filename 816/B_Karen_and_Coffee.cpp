//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k, q; cin >> n >> k >> q;
  vector<int> dif(N, 0);
  for(int i = 1; i <= n; i++) {
  	int l, r; cin >> l >> r;
    dif[l]++;
    dif[r + 1]--;
  }
  for(int i = 1; i <= N; i++) {
  	dif[i] += dif[i - 1];
  }
  vector<int> pre(N, 0);
  for(int i = 1; i < N; i++) {
    if(dif[i] >= k) {
      pre[i] = pre[i - 1] + 1;
    }
    else {
      pre[i] = pre[i - 1];
    }
  }
  while(q--) {
    int l, r; cin >> l >> r;
    cout << pre[r] - pre[l - 1] << "\n";
  }
  return 0;
}
