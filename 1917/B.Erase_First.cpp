//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; string s; cin >> n >> s;
   map<char, int> mp;
   ll ans = 0, cnt = 0;
   for(auto u : s) {
   	 if(mp.find(u) == mp.end()) {
   	 	cnt++;
   	 	mp[u]++;
   	 }
   	 ans += cnt;
   }
   cout << ans << "\n";
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

// https://prnt.sc/_vAZOk8BhpgW