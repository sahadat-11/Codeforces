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
      map<int, int> mp;
      for(auto u : s) mp[u]++;
      int ans, max_occ = 0;
      for(auto u : mp) {
         max_occ = max(max_occ, u.second);
      }
      if(max_occ > n / 2) {
         ans = max_occ - (n - max_occ);
      }
      else if(n % 2) {
         ans = 1;
      }
      else {
         ans = 0;
      }
      cout << ans << "\n";
   }
   return 0;
}


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
      map<int, int> mp;
      for(auto u : s) mp[u]++;
      int ans, max_occ = 0;
      for(auto u : mp) {
         max_occ = max(max_occ, u.second);
      }
      if(max_occ > n / 2) {
         ans = max_occ - (n - max_occ);
      }
      else {
         ans = n % 2;
      }
      cout << ans << "\n";
   }
   return 0;
}