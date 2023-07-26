//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, k; cin >> n >> k; int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int c = 0;
    if(a[0] == a[n - 1]) {
      for(int i = 0; i < n; i++) {
        if(a[i] == a[0]) c++;
      }
    }
    if(c >= k) {
      cout << "YES\n";
      return;
    }
    int suf[n], pre[n];
    int cnt = 1;
    pre[0] = cnt; suf[n - 1] = cnt;
    for(int i = 1; i < n; i++) {
      if(a[i] == a[0]) cnt++;
      pre[i] = cnt;
    }
    cnt = 1;
    for(int i = n - 2; i >= 0; i--) {
      if(a[i] == a[n - 1]) cnt++;
      suf[i] = cnt;
    }
    bool flag = false;
    for(int i = 0; i < n - 1; i++) {
      if(pre[i] % k == 0 and suf[i + 1] >= k) flag = true;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}