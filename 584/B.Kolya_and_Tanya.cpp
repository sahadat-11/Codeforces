//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}
void solve() {
   int n; cin >> n;
   cout << (binexp(3, (3 * n)) - binexp(7, n) + mod) % mod << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/XwfKA7nAY0gv