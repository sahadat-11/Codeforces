//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; string s; cin >> n >> s; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   map<int, pair<int, int>> mp;
   for(int i = 0; i < s.size(); i++) {
      if((s[i] == 'B' and s[i + 1] == 'G') or (s[i] == 'G' and s[i + 1] == 'B')) {
         int x = abs(a[i] - a[i + 1]);
         mp[x] = {i, i + 1};
         cout << a[i] << a[i+1] << x << endl;
         cout << s << endl;
         s.erase(i, 2);
         i--;
         //cout << i << endl;
      }
   }
   // for(auto u : mp) {
   //    cout << u.first << ": ";
   //    cout << "\n";
   // }
   return 0;
}