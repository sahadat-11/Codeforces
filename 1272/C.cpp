//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   string s; cin >> s;
   map<char, int> mp;
   for(int i = 0; i < k; i++) {
   	 char ch; cin >> ch;
   	 mp[ch]++;
   }
   ll cnt = 0, ans = 0;
   for(int i = 0; i < n; i++) {
   	if(mp[s[i]]) cnt++;
   	else cnt = 0;
   	ans += cnt;
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// https://prnt.sc/4Q4gdBj6EtcH