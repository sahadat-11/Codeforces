//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n - 1), ans(n);
   for(int i = 0; i < n - 1; i++) {
     cin >> a[i];
   }
   ans[n - 1] = mod;
   //ans[1] = a[0];
   // if(a[0] == 5) ans[0] = 4;
   // else ans[0] = 5;
   for(int i = n - 2; i >= 0; i--) {
   	ans[i] = ans[i + 1] - a[i];
   }
   for(int i = 0; i < n; i++) {
    cout << ans[i] << " "; 
   }
   // ans[n - 1] = a[n - 2];
   // for(int i = n - 2; i >= 0; i--) {
   // 	ans[i] = ans[i + 1] + a[i];
   // }
   // for(int i = 0; i < n; i++) {
   //  cout << ans[i] << " "; 
   // }
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