//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(k);
   for(int i = 0; i < k; i++) {
     cin >> a[i];
   }
   sort(a.begin(), a.end());
   int cnt = 0;
   for(int i = 0; i < k - 1; i++) {
     cnt += (a[i] * 2 - 1);
   }
   cout << cnt << "\n";
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