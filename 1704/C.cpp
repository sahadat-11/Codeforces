//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> v(m);
   for(int i = 0; i < m; i++) {
     cin >> v[i];
   }
   sort(v.begin(), v.end());
   vector<int> dif;
   for(int i = 1; i < m; i++) {
     dif.push_back(v[i] - v[i - 1] - 1);
   }
   dif.push_back(n - v[m - 1] + v[0] - 1);
   sort(dif.rbegin(), dif.rend());
   int safe = 0;
   for(int i = 0; i < m; i++) {
     if(dif[i] == 4 * i + 1) safe++;
     else safe += max(0ll, dif[i] - 4 * i - 1);
   }
   cout << n - safe << "\n";
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