//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9;
ll bigmod(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = ((ans % M) * (a % M)) % M;
			b--;
		}
		else {
			a = ( (a % M) * (a % M)) % M;
			b >>= 1; // b / 2;
		}
	}
	return ans % 10;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; cin >> n;
  cout << bigmod(1378, n);
  return 0;
}