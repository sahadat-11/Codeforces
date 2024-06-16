//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   set<char> st;
   for(int i = 0; i < n; i++) st.insert(s[i]);
   string x;
   for(auto u : st) x.push_back(u);
   //cout << x << "\n";
   int sz = x.size();
   map<char, char> mp;
   for(int i = 0; i < x.size(); i++) {
   	//mp[x[i] - 'a'] = mp[x[sz - i - 1] - 'a'];
   	//cout << x[i] - 'a' << " " << x[sz - i - 1] - 'a' << "\n";
    //mp[x[i]] = mp[x[sz - i - 1]];
    mp.insert({x[i], x[sz - i - 1]});
   }

   // for(auto [u, v] : mp) {
   // 	cout << u << "  " << v << "\n";
   // }
   for(int i = 0; i < n; i++) {
   	cout << mp[s[i]];
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}