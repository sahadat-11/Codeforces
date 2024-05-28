//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n; string s[n];
   int ans = 0;
   for(int i = 0; i < n; i++) cin >> s[i];
   for(char c = 'a'; c <= 'e'; c++) {
   	vector<int> v;
   	for(int i = 0; i < n; i++) {
   	  int cnt = 0;
   	  for(int j = 0; j < s[i].size(); j++) {
   	  	if(s[i][j] == c) cnt++;
   	  	else cnt--;
   	  }
   	  v.push_back(cnt);
   	}
   	sort(v.rbegin(), v.rend());
   	int sum = 0, x = 0;
   	for(int i = 0; i < n; i++) {
   	  sum += v[i];
   	  if(sum <= 0) break;
   	  x++;
   	}
   	ans = max(x, ans);
   }
   cout << ans << "\n";
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