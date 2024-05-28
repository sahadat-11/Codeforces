//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   int sum = 0, neg = 0, mn = INT_MAX;
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
   	  int x; cin >> x;
   	  if(x < 0) neg++;
   	  mn = min(mn, abs(x));
   	  sum += abs(x);
   	}
   }
   if(neg % 2) sum -= 2 * mn;
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