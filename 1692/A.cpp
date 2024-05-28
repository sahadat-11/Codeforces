//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   vector<int> v(4);
   for(int i = 0; i < 4; i++) {
     cin >> v[i];
   }
   int cnt = 0;
   for(int i = 0; i < 4; i++) {
     if(v[i] > v[0]) cnt++;
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