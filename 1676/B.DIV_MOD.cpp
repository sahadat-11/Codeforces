//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int l, r, x; cin >> l >> r >> x;
    ll ans = 0;
    if(r % x == 0) {
      if(r > l) {
        ans += (x - 1);
        ans += ((r - 1) / x);
      } 
      else {
        ans += 0;
        ans += (r / x);
      } 
    }
    else {
      int ans2 = 0;
      ans2 += (r % x);
      ans += (r / x);
      if()
    }
  } 
  return 0;
}