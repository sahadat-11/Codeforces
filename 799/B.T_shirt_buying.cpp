//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1], b[n + 1], c[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   for(int i = 1; i <= n; i++) cin >> b[i];
   for(int i = 1; i <= n; i++) cin >> c[i];
   map<int, vector<int>> mp;
   for(int i = 1; i <= n; i++) {
      mp[a[i]].push_back(b[i]);// value er modde 1st color
      mp[a[i]].push_back(c[i]);// value er modde 2nd color
   }
   set<int> s[4]; // 2D set;
   for(int i = 1; i <= n; i++) {
      s[b[i]].insert(a[i]);// b[i] color er modde a[i] insert kore
   }
   for(int i = 1; i <= n; i++) {
      s[c[i]].insert(a[i]);// c[i] color er modde a[i] insert kore
   }
   for(int i = 1; i <= 3; i++) {

   }
   // for(auto u : mp) {
   //    cout << u.first << ": ";
   //    auto p = u.second;
   //    for(auto x : p) cout << x << " ";
   //    cout << endl;
   // }
   int m; cin >> m;
   for(int i = 0; i < m; i++) {
      int x; cin >> x;
      if(!s[x].empty()) {// jodi empty na hoi
         int val = *(s[x].begin());
         cout << val << " ";
         s[mp[val][0]].erase(val);// current value er front color remove kore
         s[mp[val][1]].erase(val);// current value er back color remove kore
      }
      else {
         cout << -1 << "\n";
      }
   }
   return 0;
}