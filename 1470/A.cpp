//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < m; i++) {
     cin >> b[i];
   }
   sort(a.rbegin(), a.rend());
   int x = 0, ans = 0;
   for(int i = 0; i < n; i++) {
   	if(b[x] < b[a[i] - 1]) {
   	  ans += b[x]; x++;
   	}
   	else {
   	  ans += b[a[i] - 1];
   	}
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