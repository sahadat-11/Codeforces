//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
int cnt[26];
void solve() {
   int n, k; string s; cin >> n >> k >> s;
   for(auto u : s) cnt[u - 'A']++;
   int mn = INT_MAX;
   for(int i = 0; i < k; i++) {
   	 mn = min(mn, cnt[i]);
   }
   cout << mn * k << "\n";
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