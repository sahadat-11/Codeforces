//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

int f(int r) {
   int p = 0;
   for(int i = 0; i < r; i++) {
     int y = sqrtl(r * r - i * i - 1);
     if(i == 0) p += 2 * y + 1;
     else p += (2 * y + 1) * 2;
   }
   return p;
}

void solve() {
   int r; cin >> r;
   cout << f(r + 1) - f(r) << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}