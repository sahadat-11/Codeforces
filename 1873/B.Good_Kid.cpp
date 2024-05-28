//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll mx = 0;
    for(int i = 0; i < n; i++) {
      ll mul = 1;
      for(int j = 0; j < n; j++) {
        if(j == i) {
          a[j] = a[j] + 1;
          mul = 1ll * mul *a[j];
          a[j] = a[j] - 1;
        }
        else  mul = 1ll * mul *a[j];
      }
      //cout << mul << endl;
      mx = max(mx, mul);
    }
    cout << mx << "\n";
  }
  return 0;
}