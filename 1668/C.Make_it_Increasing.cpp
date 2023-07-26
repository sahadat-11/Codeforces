//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  ll ans = 1e18;
  for(int i = 0; i < n; i++) {
    ll x = 0, s = 0; 
    for(int j = i + 1; j < n; j++) {
      ll k = x / a[j] + 1;
      x = k * a[j];
      s += k;
    }
     x = 0;
    for(int j = i - 1; j >= 0; j--) {
      ll k = x / a[j] + 1;
      x = k * a[j];
      s += k; 
    }
    ans = min(ans, s);
  }
  cout << ans << "\n";
  return 0;
}