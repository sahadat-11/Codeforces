//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   v.push_back(0);
   int cnt = 0;
   for(int i = 1; i <= n; i++) {
     if(v[i] == 0 and v[i] != v[i - 1]) {
     	cnt++;
     }
   }
   if(cnt > 2) cnt = 2;
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