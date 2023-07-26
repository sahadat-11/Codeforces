//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, k; cin >> n >> k;
  ll x = (n + 1) / 2;
  if(k <= x)  cout << k * 2 - 1; // first half odd;
  else cout << (k - x) * 2; // second half even
  return 0;
}