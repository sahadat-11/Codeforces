//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, h; cin >> n >> h;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int ans = 1;
   for(int i = 0; i < n; i++) {
   	sort(a.begin(), a.begin() + i + 1);
   	int s = 0;
   	for(int j = i; j >= 0; j -= 2) {
   	  s += a[j];
   	}
   	if(s <= h) {
   	  ans = max(i + 1, ans);
   	}
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}