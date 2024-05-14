//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int binary[20] = {10, 11, 101, 111, 1001, 1011, 1101, 10001, 10011, 10101, 10111, 11001, 11101, 11111};
void solve() {
   int n; cin >> n;
   for(int i = 13; i >= 0; i--) {
    int x = binary[i];
    while(n % x == 0) {
      n /= x;
    }
   }
   if(n == 1) cout << "YES\n";
   else cout << "NO\n";
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