//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, l, r; cin >> n >> l >> r;
   vector<int> v;
	int x = l; bool flag = true;
	for(int i = 1; i <= n; i++) {
	  if(((l + i - 1) / i) * i > r) flag = false;
	  else v.push_back(((l + i - 1) / i) * i);
	  //cout << __gcd(i, x) << " ";
	}
	if(flag) {
	  cout << "YES\n";
	  for(auto u: v) cout << u << " "; cout << "\n";
	}
	else cout << "NO\n";
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