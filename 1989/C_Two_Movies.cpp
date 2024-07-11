//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> b[i];
   }
   int sum1 = 0, sum2 = 0;
   for(int i = 0; i < n; i++) {
    int x = sum1 + a[i];
    int y = sum2 + b[i];
    int dif1 = (x - sum2);
    int dif2 = (y - sum1);
    //cout << x << " " << y << "\n";
    if(dif1 >= dif2) {
      sum2 += b[i];
    }
    else {
      sum1 += a[i];
    }
   }
   //cout << sum1 << " " << sum2 << "\n";
   cout << max(sum1, sum2) << "\n";
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