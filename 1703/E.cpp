//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   string s[n];
   for(int i = 0; i < n; i++) cin >> s[i];
   int ans = 0;
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < n; j++) {
   	  int t=s[i][j]-'0'+s[j][n-i-1]-'0'+s[n-i-1][n-j-1]-'0'+s[n-j-1][i]-'0';
	   if(t==1||t==3)ans++;
	   if(t==2)ans+=2;
   	}
   }
   cout << ans / 4 << "\n";
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