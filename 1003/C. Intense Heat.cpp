//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; double a[n + 1], pre[n + 1] = {0};
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  for(int i = 1; i <= n; i++) {
  	pre[i] = pre[i - 1] + a[i];
  }
  // for(int i = 1; i <= n; i++) {
  	// cout << pre[i] << " ";
  // }
  double mx = 0;
  for(int i = 0; i <= n; i++) {
  	for(int j = i + k; j <= n; j++) {
  		mx = max(mx, ((pre[j] - pre[i]) / (j - i)));
  	}
  }
  //cout << mx << "\n";
  cout << fixed << setprecision(15) << mx << "\n";
  return 0;
}
