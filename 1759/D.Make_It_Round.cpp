//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, m; cin >> n >> m;
    ll x = 1;
    while(n % 10 == 0) {
      n /= 10;
      x *= 10;
    }
    while(n % 2 == 0 and m >= 5) {
      n /= 2;
      m /= 5;
      x *= 10;
    }
    while(n % 5 == 0 and m >= 2) {
      n /= 5;
      m /= 2;
      x *= 10;
    }
    while(m >= 10) {
      m /= 10;
      x *= 10;
    }
    cout << n * x * m << "\n";
  } 
  return 0;
}