//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
bool isprime(int n) {
  if(n <= 1) return false;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}
void solve() {
   int n; cin >> n;
   bool flag = true;
   if(__builtin_popcount(n) == 1 and n != 2) flag = false;
   if(n % 2 == 0 and isprime(n / 2)) flag = false;
   if(flag) cout << "Ashishgup\n";
   else cout << "FastestFinger\n";
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