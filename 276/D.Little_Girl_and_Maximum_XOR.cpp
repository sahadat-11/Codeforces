//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll l, r; cin >> l >> r;
  ll x = l ^ r;
  ll msb = 63 - (__builtin_clzll(x));
  cout << 2 * (1ll << msb) - 1 << endl;
  return 0;
}