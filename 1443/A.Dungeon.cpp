//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int a, b, c; cin >> a >> b >> c;
    int k = (a + b + c) / 9; // 6 din a 6 ta  r last(7) day 3;
    if((a + b + c) % 9 == 0 and a >= k and b >= k and c >= k)
    cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}