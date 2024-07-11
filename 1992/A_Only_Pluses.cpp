//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int a[3];
   for(int i = 0; i < 3; i++) {
    cin >> a[i];
   }
   for(int i = 0; i < 5; i++) {
    int x = (a[0] + 1) * a[1] * a[2];
    int y = a[0] * (a[1] + 1) * a[2];
    int z = a[0] * a[1] * (a[2] + 1);
    int mx = max(x, max(y , z));
    if(mx == x) {
        a[0]++;
    }
    else if(mx == y) {
        a[1]++;
    }
    else if(mx == z) {
        a[2]++;
    }
   }
   int ans = 1;
   for(int i = 0; i < 3; i++) {
    ans *= a[i];
    //cout << a[i] << " ";
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