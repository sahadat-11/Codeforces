//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int left_sum = 0, right_sum = 0;
   for(int i = 0; i < n; i++) {
    left_sum += a[i];
    right_sum += a[n - 1 - i];
    if(left_sum <= 0 or right_sum <= 0) {
      cout << "NO\n"; return;
    }
   }
   cout << "YES\n";
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