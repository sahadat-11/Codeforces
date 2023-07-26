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
      if(s.back() == 'o') cout << "FILIPINO\n";
      else if(s.back() == 'a') cout << "KOREAN\n";
      else cout << "JAPANESE\n";
   }
    return 0;
}
