//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n;
  int m = n * (n - 1) / 2;
  int a[m];
  for(int i = 0; i < m; i++) cin >> a[i];
  sort(a, a + m);
  for(int i = 0; i < m; i += --n) {
    cout << a[i] << " ";
  }
  cout << a[m - 1] << "\n";
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

// https://prnt.sc/ByuMP6lDv_RA