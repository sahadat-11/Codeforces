//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k; int a[n];
    ll pre[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    pre[0] = a[0];
    for(int i = 1; i < n; i++) pre[i] = pre[i - 1] + a[i];
    int rem = max(1ll*0, k - pre[n - 1]);
    int x = rem / n;
    for(int i = 0; i < n; i++) pre[i] += x;
    int u = upper_bound(pre, pre + n, k) - pre;
    cout << pre[u] - pre[u - 1] << endl;
  }
  return 0;
}