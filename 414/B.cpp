//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2005, mod = 1e9 + 7;
#define int long long
int n, k;
int dp[N][N];

int func(int i, int last) {
	if(i == k + 1) {
	  return 1;
	}
	int &ans = dp[i][last];
	if(ans != -1) return ans;
	ans = 0;
	for(int cur = last; cur <= n; cur += last) {
      ans += func(i + 1, cur);
      ans %= mod;
	}
	return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  memset(dp, -1, sizeof dp);
  cout << func(1, 1);
  return 0;
}

// total state : (N * N);
// O(N * N * log(N);