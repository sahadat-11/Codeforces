//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int cnt = 0;
   for(int i = 1; i < n - 1; i++) {
   	if(a[i] > a[i - 1] and a[i] > a[i + 1]) {
   	  cnt++;
   	  if(i + 2 < n) {
   	  	a[i + 1] = max(a[i], a[i + 2]);
   	  }
   	  else a[i + 1] = a[i];
   	}
   }
   cout << cnt << "\n";
   for(int i = 0; i < n; i++) {
    cout << a[i] << " "; 
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