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
void solve() {
   int n, k; cin >> n >> k;
   int sum = 0;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     sum += v[i];
   }
   int sum1 = 0;
   //cout << sum << endl;
   int max_sum = INT_MIN, cur_sum = 0;
   for(int i = 0; i < n; i++) {
      cur_sum += v[i];
      max_sum = max(max_sum, cur_sum);
      if(cur_sum < 0) cur_sum = 0;
   }
   //cout << max_sum << endl;
   	//int sum1 = sum;
    if(max_sum > 0) {
      max_sum %= mod;
      for(int i = 0; i < k; i++) {
   	  int x = (max_sum * binexp(2, i)) % mod;
   	  sum1 = (sum1 + x) % mod;
   	  }
   	  sum = (sum + sum1) % mod;
    }
    else {
    	for(int i = 0; i < k; i++) {
         sum = (sum + sum1) % mod;
   	  }
    }
   	if(sum < 0) sum = (sum + mod) % mod;
    cout << sum << "\n";
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