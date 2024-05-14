//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b; cin >> a >> b;
   int cnt = 0;
   int mn = INT_MAX;
   for(int bb = 2; bb < 30; bb++) {
     int aa = a; int cnt = bb - b;
     if(cnt <= 0) {
     	bb = b, cnt = 0;
     }
     while(aa >= bb) {
       aa /= bb;
       cnt++;
     }
     mn = min(mn, cnt + 1);
     //cout << mn << endl;
   }
   cout << mn << "\n";
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