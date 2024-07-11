//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int mx = 1e12 + 7, x = 0, y = 0;
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
        int a = i;
        int b = n / i;
        if(__gcd(a, b) == 1) {
          if(max(a, b) < mx) {
            mx = max(a, b);
            x = a, y = b;
          }
        }
    }
  }
  cout << x << " " << y << "\n";
  return 0;
}