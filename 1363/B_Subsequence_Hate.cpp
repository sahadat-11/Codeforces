//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int one = count(s.begin(), s.end(), '1');
   int zero = count(s.begin(), s.end(), '0');
   int ans = min(one, zero);
   int n = s.size();
   int left_zero = 0, left_one = 0;
   for(int i = 0; i < n; i++) {
    if(s[i] == '0') left_zero++;
    else left_one++;
    int right_zero = zero - left_zero;
    int right_one = one - left_one;
    ans = min(ans, min(left_one + right_zero, left_zero + right_one));
   }
   cout << ans << "\n";
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