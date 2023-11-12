//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int n = s.size();
   vector<int> v[26];
   for(int i = 0; i < 26; i++) {
      v[i].push_back(-1);
   }
   for(int i = 0; i < s.size(); i++) {
      v[s[i] - 'a'].push_back(i);
   }
   for(int i = 0; i < 26; i++) {
      v[i].push_back(n);
   }
   int ans = INT_MAX;
   for(int i = 0; i < 26; i++) {
      int mx = 0;
      for(int j = 1; j < v[i].size(); j++) {
         mx = max(mx, v[i][j] - v[i][j - 1]);
      }
      ans = min(ans, mx);
   }
   cout << ans << "\n";
   return 0;
}
//https://prnt.sc/T_rvBQylhhRl
