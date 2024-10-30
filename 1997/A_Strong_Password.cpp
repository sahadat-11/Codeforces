//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   bool take = false;
   for(int i = 1; i < n; i++) {
    if(s[i] == s[i - 1]) {
      if(s[i] == 'a') {
        s.insert(s.begin() + i, 'z');
      }
      else {
        s.insert(s.begin() + i, 'a');
      }
      take = true;
      break;
    }
   }
   if(take) {
    cout << s << "\n";
   }
   else {
    if(s[0] == 'a') {
        cout << 'z' << s << "\n";
    }
    else {
        cout << 'a' << s << "\n";
    }
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