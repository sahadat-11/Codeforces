//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];
   map<int, int> mp1, mp2;
   for(int i = 0; i < n; i++) mp1[a[i]]++;
   for(int i = 0; i < m; i++) mp2[b[i]]++;
   ll ans = 0;
   // for(auto u : mp1) {
   //   cout << u.first << " " << u.second << endl;
   // }
   // for(auto u : mp2) {
   //   cout << u.first << " " << u.second << endl;
   // }
   for(auto u : mp1) {
     ans += (1ll * mp1[u.first] * mp2[u.first]);
   }
   cout << ans << "\n";
   return 0;
}