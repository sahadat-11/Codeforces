//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int sum1 = 0, sum2 = 0, cnt1 = 0, cnt2 = 0;
   int x1 = k / 2 + k % 2, x2 = k / 2;
   //cout << x1 << " " << x2 << " ";
   for(int i = 0; i < n; i++) {
     sum1 += v[i];
     if(sum1 > x1) {
     	v[i] = sum1 - x1;
     	break;
     }
     cnt1++;
   }
   for(int i = n - 1; i >= 0 ; i--) {
     sum2 += v[i];
     if(sum2 > x2) {
     	break;
     }
     cnt2++;
   }
   //cout << cnt1 << " " << cnt2 << "\n";
   cout << min(n, cnt1 + cnt2) << "\n"; 
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