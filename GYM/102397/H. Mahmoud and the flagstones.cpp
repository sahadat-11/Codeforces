//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;
int bigmod(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) {
			ans = (1ll * ans * a) % M;
			b--;
		}
		else {
			a = (1ll * a * a) % M;
			b >>= 1;
		}
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  map<int, int> mp;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
  	mp[a[i]]++;
  }
  for(auto u : mp) {
  	cnt = (cnt + (bigmod(2, u.second) - 1) % M) % M;
  }
  cout << cnt << "\n";
  return 0;
}