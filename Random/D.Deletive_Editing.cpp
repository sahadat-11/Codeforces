//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s, t; cin >> s >> t;
      map<char, int> mp;
      string ans = "";
      for(auto u : t) mp[u]++;
      for(int i = s.size() - 1; i >= 0; i--) {
         if(mp[s[i]]) {
            ans += s[i];
            mp[s[i]]--;
         }
      }
      reverse(ans.begin(), ans.end());
      //cout << ans << "\n";
      if(ans == t) cout << "YES\n";
      else cout << "NO\n";
   }
    return 0;
}
