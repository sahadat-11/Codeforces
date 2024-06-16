//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
	int n; cin >> n;
  	vector<int> a(n);
  	for(int i = 0; i < n; i++) cin >> a[i];
  	int ans = 0;
  	if(n == 2) ans = min(a[0], a[1]);
  	for(int i = 2; i < n; i++) {
  	  vector<int> x;
  	  x.push_back(a[i - 2]);
  	  x.push_back(a[i - 1]);
  	  x.push_back(a[i]);
  	  sort(x.begin(), x.end());
  	  ans = max(ans, x[1]);
  	}
  	cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	solve();
  }
  return 0;
}