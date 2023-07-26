//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int tl = k * l;
  int x = c * d;
  int y = p / np;
  int z = tl / nl;
  cout << min(x, min(y, z)) / n;
  return 0;
}