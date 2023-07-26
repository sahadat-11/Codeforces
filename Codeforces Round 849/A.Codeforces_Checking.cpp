//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string check = "codeforces";
      char c; cin >> c;
      if(check.find(c) != -1) cout << "YES\n";
      else cout << "NO\n";
   }
    return 0;
}
