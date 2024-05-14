//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, c; cin >> a >> b >> c;
   int cnt = a;
   cnt += (b + 2) / 3;
   int shrt = (3 - b % 3) % 3;
   c -= shrt;
   if(c < 0) {
   	cout << "-1\n";
   }
   else {
   	cnt += (c + 2) / 3;
   	cout << cnt << "\n";
   }
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