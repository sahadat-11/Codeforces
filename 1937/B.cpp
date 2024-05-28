//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string a, b; cin >> n >> a >> b;
   string ans = a[0] + b;
   int cnt = 1;
   for(int i = 1; i < (int)a.size(); i++) {
   	if(a[i] < ans[i]) {
   	  ans[i] = a[i];
   	  cnt = 1;
   	}
   	else if(a[i] == ans[i]) cnt++;
   	else break;
   }
   cout << ans  << "\n" << cnt << "\n";
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