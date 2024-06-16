//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int h, n; cin >> h >> n;
   vector<int> a(n + 1), b(n + 1);
   for(int i = 1; i <= n; i++) {
    cin >> a[i]; 
   }

   for(int i = 1; i <= n; i++) {
    cin >> b[i]; 
   }

   int l = 1, r = 1e12, ans = 0;
   while(l <= r) {
   	  int mid = l + (r - l) / 2;
   	  int damage = 0;
   	  for(int i = 1; i <= n; i++) {
   	   	int atack = 1 + (mid - 1) / b[i];
   	   	damage += atack * a[i];
   	   	if(damage >= h) break;
   	  }
   	  if(damage >= h) {
   	   	ans = mid;
   	   	r = mid - 1;
   	  }
   	  else {
   	   	l = mid + 1;
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