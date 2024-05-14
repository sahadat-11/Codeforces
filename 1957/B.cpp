//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   int p = log2(k);
   int x = (1LL << p);
   //cout << x << endl;
   if(n == 1) {
    cout << k << "\n";
   }
   else {
    cout << x - 1 << " ";
    cout << k - (x - 1) << " ";
    for(int i = 3; i <= n; i++) {
      cout << 0 <<" ";
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
  };
  return 0;
}