//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; char d; string s; 
    cin >> n >> d >> s;
    int i = 0;
    while(i < n and s[i] >= d) {
      i++;
    }
    s.insert(i, 1, d); // i index a akta 1 d insert kora;
    cout << s << "\n";
  }
  return 0;
}

// approach 2:
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

