//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; cin >> n;
  int cnt = 0;
  while(n > 1) {
  	if(n % 6 == 0) {
  	  n /= 6; cnt++;
  	}
  	else if((n * 2) % 6 == 0) {
  	  n *= 2; cnt++;
  	}
  	else {
  	  cnt = -1; break;
  	}
  }
  cout << cnt << "\n"; 
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