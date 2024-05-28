//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
int pre[N];
void solve() {
   int n; cin >> n;
   cout << pre[n] << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i <= N; i++) {
     int x = i, sum = 0;
     while(x) { 
      sum += x % 10;
      x /= 10;
     }
     pre[i] = pre[i - 1] + sum;
   }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}