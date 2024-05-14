//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   string a, b; cin >> a >> b;
   x %= n;
   //rotate(a.begin(), a.begin() + x, a.end());
   string c = a;
   for(int i = 0; i < n - x; i++) {
   	c[i + x] = a[i];
   }
   //cout << c << "\n";
   for(int i = 0; i < x; i++) {
   	c[i] = a[n - x + i];
   }
   //cout << c << "\n";
   int cnt = 0;
   for(int i = 0; i < (int)a.size(); i++) {
     if(b[i] != c[i]) cnt++;
   }
   cout << cnt << "\n";
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