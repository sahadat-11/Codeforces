//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(string s) {
   if(s.front() == 'B') return false;
   if(s.back() == 'A') return false;
   int cnta = 0, cntb = 0;
   for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'A') cnta++;
      else cntb++;
      if(cntb > cnta) return false;
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      if(check(s)) cout << "YES\n";
      else cout << "NO\n";
   }
    return 0;
}
