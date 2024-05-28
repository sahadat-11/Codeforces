//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int cnt = 0;
   while(n % 3 != 0) {
    if(n >= 10) n -= 10;
    else n--; 
    cnt++;
   }
   cnt += n / 15;
   n %= 15;
   cnt += n / 6;
   n %= 6;
   cnt += n / 3;
   n %= 3;
   cnt += n / 1;
   cout << cnt << "\n";
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