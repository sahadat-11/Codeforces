//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; string s; cin >> n >> s;
      bool flag = true;
      while(s.size() and flag) {
         if(s.front() == s.back()) flag = false;
         else {
            s.erase(s.begin() + 0); s.pop_back();
         }
      }
      cout << s.size() << "\n";
   }
    return 0;
}
