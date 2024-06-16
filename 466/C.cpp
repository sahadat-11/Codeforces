//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1), pre_sum(n + 1, 0);
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  	pre_sum[i] = pre_sum[i - 1] + a[i];
  }
  if(pre_sum[n] % 3) {
  	cout << "0\n"; return 0;
  }
  int sum = pre_sum[n] / 3;
  int ans = 0, cnt = 0;
  for(int j = 1; j <= n; j++) {
  	int i = j;
  	if(i >= 2) cnt += pre_sum[i - 1] == sum;
  	if(j >= 2 and j < n and pre_sum[j] == 2 * sum) {
  	  ans += cnt;
  	}
  }
  cout << ans << "\n";
  return 0;
}