//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int v[3];
   for(int i = 0; i < 3; i++) {
   	cin >> v[i];
   }
   int ans = INT_MAX;
   for(int i = 0; i < 3; i++) {
   	int sum = 0;
   	for(int j = 0; j < 3; j++) {
   	  sum += abs(v[i] - v[j]);
   	}
   	ans = min(ans, sum);
   }
   cout << ans << "\n";
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