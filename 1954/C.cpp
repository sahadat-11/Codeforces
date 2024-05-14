// In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string a, b; cin >> a >> b;
   if(a < b) swap(a, b);
   int n = a.size();
   bool flag = false;
   for(int i = 0; i < n; i++) {
   	if(a[i] > b[i] and flag) swap(a[i], b[i]);
   	if(a[i] != b[i]) flag = true;
   }
   cout << a << "\n" << b << '\n';
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

// https://www.youtube.com/watch?v=jmWBCOk_82s