//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; string s; cin >> n >> q >> s;
   int pre[n + 1][26] = {0};
   for(int i = 1; i <= n; i++) {
   	int x = s[i - 1] - 'a';
   	//cout << x << " ";
   	for(int j = 0; j < 26; j++) {
   	  if(x == j) {
   	  	pre[i][j] = pre[i - 1][j] + 1; 
   	  }
   	  else pre[i][j] = pre[i - 1][j]; 
   	}
   }
   // for(int i = 1; i <= n; i++) {
   // 	for(int j = 0; j < 26; j++) {
   // 	  cout << pre[i][j] << " ";
   // 	}
   //  cout << "\n";
   // }
   while(q--) {
   	int l, r; cin >> l >> r;
   	int ans = 0;
   	for(int i = 0; i < 26; i++) {
   	  int x = pre[r][i] - pre[l - 1][i];
   	  ans += (x * (i + 1));
   	}
   	cout << ans << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}