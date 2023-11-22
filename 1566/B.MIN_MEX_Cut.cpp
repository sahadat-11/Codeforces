//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     string s; cin >> s;
     int n = s.size();
     int one = count(s.begin(), s.end(), '1');
     int zero = count(s.begin(), s.end(), '0');
     int ans;
     if(one == n) ans = 0;
     else if(zero == n) ans = 1;
     else {
       ans = min(2, min(one, zero));
     }
     cout << ans << "\n";
  }
  return 0;
}
