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
      if(s.size() == 2) cout << s[1] << "\n";
      else {
        sort(s.begin(), s.end());
        cout << s[0] << "\n";
      }
   }
    return 0;
}
