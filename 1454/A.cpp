//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; cin >> n;
  if(n % 2 == 0) {
  	for(int i = n; i >= 1; i--) cout << i << " ";
  }
  else {
  	cout << n << " " << 1 << " ";
  	for(int i = n - 1; i >= 2; i--) cout << i << " ";
  }
  cout << "\n";
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