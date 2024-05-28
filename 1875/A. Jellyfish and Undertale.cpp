//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	ll a, b, n; cin >> a >> b >> n; ll arr[n];
  	for(int i = 0; i < n; i++) cin >> arr[i];
  	ll ans = 0, sum = b;
  	for(int i = 0; i < n; i++) {
  		sum += arr[i];
  		if(sum > a) {
  			ans += (sum - arr[i] - 1);
  			sum = min((1 + arr[i]), a);
  		}
  		//cout << sum << " " << ans << "\n";
  	}
  	cout << ans + sum << "\n";
  }
  return 0;
}
