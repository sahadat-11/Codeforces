//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n], b[n];
  vector<pair<int, int>> v;
  for(int i = 0; i < n; i++) {
  	cin >> a[i] >> b[i];
  	//sum += b[i];
  	v.push_back({a[i], b[i]});
  }
  //cout << min((n + 1) * k, sum);
  sort(v.begin(), v.end());
  // for(auto u : v) {
  	// cout << u.first << " " << u.second << "\n";
  // }
  int pretake = min(v[0].second, k);
  int rem = max(v[0].second - pretake, 0);
  int sum = pretake;
  for(int i = 1; i < n; i++) {
  	int now = rem + v[i].second;
  	if(now <= k) {
  		sum  += now;
  		rem = 0;
  	}
  	else {
  		sum += k;
  		rem = max(now - k, 0);
  	}
  }
  sum += min(rem, k);
  cout << sum << "\n";
  return 0;
}