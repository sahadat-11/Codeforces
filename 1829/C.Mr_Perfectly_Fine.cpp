//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int mn1 = INT_MAX, mn2 = INT_MAX, mn3 = INT_MAX;
    for(int i = 0; i < n; i++) {
      int x; string s; cin >> x >> s;
      if(s[0] == '1') {
        mn1 = min(mn1, x);
      }
      if(s[1] == '1') {
        mn2 = min(mn2, x);
      }
      if(s[0] == '1' and s[1] == '1') {
        mn3 = min(mn3, x);
      }
    }
    int ans = -1;
    if(mn1 == INT_MAX or mn2 == INT_MAX) ans = -1;
    else ans = mn1 + mn2;
    cout << min(ans, mn3) << "\n";
  }
  return 0;
}