//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0, mx = 0, ans = -1;
   for(int i = 0; i < n; i++) {
    if(v[i] == v[0]) cnt++;
    mx = max(mx, v[i]); 
   }
   int mx_cnt = count(v.begin(), v.end(), mx);
   if(cnt == n) {
   	ans = -1;
   }
   else if(mx_cnt == 1) {
   	int x = max_element(v.begin(), v.end()) - v.begin();
   	ans = x + 1;
   }
   else {
   	for(int i = 0; i < n - 1; i++) {
   	  if(v[i] == mx and v[i] != v[i + 1]) {
   	  	ans = i + 1; break;
   	  }
   	  else if(i + 1 < n and v[i + 1] == mx and v[i] != v[i + 1]) {
   	  	ans = i + 2; break;
   	  }
   	}
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