//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, k; cin >> n >> k;
  ll x = 64 - (__builtin_clzll(n));
  if(k > 1) cout << (1LL << x) - 1;
  else cout << n;
  return 0;
}
