//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> a(n + 1), pre(n + 1, 0);
   int f = 1;
   for(int i = 1; i <= n; i++) {
   	cin >> a[i];
   	if(f) {
   	  pre[i] = pre[i - 1] + a[i];
   	}
   	else {
   	  pre[i] = pre[i - 1] - a[i];
   	}
   	f ^= 1;
   }
   while(q--) {
   	int l, r; cin >> l >> r;
   	int y = pre[r] - pre[l - 1];
   	if(l & 1) cout << y << "\n";
   	else cout << -y << "\n"; 
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1, cs = 0; 
  //cin >> t;
  while(t--) {
    //cout << "Case " << ++ cs << ": ";
    solve();
  }
  return 0;
}