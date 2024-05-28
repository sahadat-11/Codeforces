//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int l = 0, h = 2e9, ans = 0;
   while(l <= h) {
   	int mid = l + (h - l) / 2;
   	int sum = 0;
   	for(int i = 0; i < n; i++) {
   	  if(v[i] < mid) {
   	  	sum += (mid - v[i]);
   	  }
   	}
   	if(sum <= x) {
   	  	ans = mid;
   	  	l = mid + 1;
   	}
   	else h = mid - 1;
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