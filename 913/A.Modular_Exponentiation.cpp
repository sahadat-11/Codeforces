//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  if(n > 32) {
  	cout << m << "\n";
  }
  else {
  	ll x = (1ll << n);
  	cout << m % x << "\n";
  }
  return 0;
}