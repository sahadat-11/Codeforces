//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int x, y; cin >> x >> y;
  if(y % x == 0) {
    cout << 1 << " " << y / x << "\n";
  }
  else {
    cout << "0 0\n";
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}
