//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
#define ll long long
int f[N];
void solve() {
  int n, m; cin >> n >> m; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  bool flag = false;
  for(int i = 0; i < n; i++) {
    int x = a[i] % m;
    if(f[x]) flag = true;
    f[x]++;
  }
  if(flag) {
    cout << "0\n";
  }
  else {
    ll ans = 1;
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        ans = (ans * 1ll * abs(a[i] - a[j])) % m;
      }
    }
    cout << ans << "\n";
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/EmXEN8BMVNJC