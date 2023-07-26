//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  int mx = INT_MIN, mn = INT_MAX;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    mx = max(mx, b[i]);
    mn = min(mn, a[i]);
  }
  //cout << mx << " " << mn << "\n";
  for(int i = 0; i < n; i++) {
    if(a[i] == mn and b[i] == mx) {
      cout << i + 1;
      return 0;
    }
  }
  cout << -1;
  return 0;
}
