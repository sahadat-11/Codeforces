//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   if(n == 1 or n == 2 or n == 5) {
    cout << "NO\n";
   }
   else {
    string xx = s.substr(0, 2);
    string yy = s.substr(2, n - 2);
    int zz = stoi(yy);
    if(xx != "10") {
        cout << "NO\n";
    }
    else if(s[2] == '0' or zz < 2) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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