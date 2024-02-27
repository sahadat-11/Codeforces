//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   vector<int> v(3);
   for(int i = 0; i < 3; i++) cin >> v[i];
   sort(v.begin(), v.end());
   if(v[1] != v[2]) cout << "NO\n";
   else cout << "YES\n" << v[0] << " " << v[0] << " " << v[2] << "\n";
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