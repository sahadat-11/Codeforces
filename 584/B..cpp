//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) {
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int total = binexp(3, n * 3);
  int bad = binexp(7, n);
  //cout << total << " " << bad << " " << total - bad << "\n";
  cout << ((total - bad) + mod) % mod << "\n";
  return 0;
}

// https://prnt.sc/XwfKA7nAY0gv


