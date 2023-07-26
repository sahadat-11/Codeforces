//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s1, s2; cin >> s1 >> s2;
      sort(s1.begin(), s1.end());
      sort(s2.begin(), s2.end());
      //cout << s1 << " " << s2 << "\n";
      if(s1[0] > s2[0]) cout << "<\n";
      else if(s1[0] < s2[0]) cout << ">\n";
      else {
         if(s1 == s2) cout << "=\n";
         else if(s1[0] == 'L') {
            if(s1.size() > s2.size()) cout << ">\n";
            else cout << "<\n";
         }
         else if(s1[0] == 'S') {
            if(s1.size() > s2.size()) cout << "<\n";
            else cout << ">\n";
         }
      }
     // else cout << "=\n";

   }
    return 0;
}

// approach 2:

#include <iostream>
using namespace std;
#define sz(a) (int)a.size()

int main() {
   int t;
   cin >> t;
   while (t--) {
      string a, b;
      cin >> a >> b;
      char ca = a.back();
      char cb = b.back();
      if (ca == cb) {
         if (sz(a) == sz(b)) cout << '=' << endl;
         else if (ca == 'S') cout << (sz(a) > sz(b) ? '<' : '>') << endl;
         else cout << (sz(a) > sz(b) ? '>' : '<') << endl;
      }
      else cout << (ca < cb ? '>' : '<') << endl;
   }
}
