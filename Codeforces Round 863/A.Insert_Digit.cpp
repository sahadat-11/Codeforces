//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; char d; cin >> n >> d; string s; cin >> s;
      if(d == '0') s.insert(s.end(), d);
      else{
      for(int i = 0; i <= s.size();) {
         if(s[i] >= d) {
            i++;
         }
         else {
            s.insert(s.begin() + i, d); break;
         }
      }
   }
      cout << s << endl; 
   }
    return 0;
}

// approach 2:

#include <iostream>

using namespace std;

void solve() {
   int n;
   string s;
   char cur;
   cin >> n >> cur;
   cin >> s;
   int i;
   for(i = 0; i < n; ++i) {
      if(cur > s[i]) {
         break;
      }
   }
   cout << (s.substr(0, i) + cur + s.substr(i, n - i)) << endl;
}

int main() {
   int t;
   cin >> t;
   while(t --) {
      solve();
   }
} 