//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   set<string> st;
   cin.ignore();
   while(t--) {
      string s;
      getline(cin, s);
      st.insert(s);
   }
   cout << st.size() << "\n";
   return 0;
}