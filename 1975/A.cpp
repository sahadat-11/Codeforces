//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
	int n; cin >> n;
  	vector<int> a(n);
  	for(int i = 0; i < n; i++) cin >> a[i];
  	sort(a.begin(), a.end());
  	int x = a[0], y = 1, f = 0;

  	for(int i = 0; i < n; i++) {
  	  if(a[i] % x != 0) {
  	  	if(!f) {
  	  		y = a[i];
  	  		f = 1;
  	  	}
  	  }
  	  if((a[i] % x != 0) and (a[i] % y != 0)) {
  	  	cout << "NO\n"; return;
  	  }
  	}
  	cout << "YES\n";
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