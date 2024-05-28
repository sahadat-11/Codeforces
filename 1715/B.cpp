//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, b, s; cin >> n >> k >> b >> s;
   vector<int> v(n + 1, 0);
   if(k * b > s or (s > k * b + (k - 1) * n)) cout << "-1\n";
   else {
     int extra = s - k * b;
     cout << b * k + min(extra, k - 1) << " ";
     extra -= min(extra, k - 1);
     for(int i = 1; i < n; i++) {
       cout << min(extra, k - 1) << " ";
       extra -= min(extra, k - 1);
     }
     cout << "\n";
   }
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