//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   int cnt = 0;
   cnt += (n / 100); n %= 100;
   cnt += (n / 20); n %= 20;
   cnt += (n / 10); n %= 10;
   cnt += (n / 5); n %= 5;
   cnt += (n / 1); n %= 1;
   cout << cnt << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}