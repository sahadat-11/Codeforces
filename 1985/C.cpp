//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() { 
   int n; cin >> n;
   vector<int> a(n + 1), pre(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   //sort(a.begin(), a.end());
   int cnt = 0, mx = 0;
   for(int i = 1; i <= n; i++) {
   	 mx = max(mx, a[i]);
   	 pre[i] = pre[i - 1] + a[i];
   	 if(pre[i] == 2 * mx) cnt++;
   }
   cout << cnt << "\n";
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