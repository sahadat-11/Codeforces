//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k, m; cin >> n >> k >> m;
   string s; cin >> s;
   map<char, int> mp;
   for(auto u : s) mp[u]++;
   for(int i = 0; i < k; i++) {
     if(mp[i + 'a'] < n) {
       cout << "NO\n";
       for(int j = 0; j < n; j++) cout << char(i + 'a'); cout << "\n";
       return;
     }
   }
   cout << "YES\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}