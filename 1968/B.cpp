//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; string a, b; cin >> n >> m >> a >> b;
   // vector<int> one, zero;
   // for(int i = 0; i < m; i++) {
   // 	if(b[i] == '0') zero.push_back(i);
   // 	else one.push_back(i);
   // }
   // int i = 0, j = 0, last = -1, now = -1, cnt = 0;
   // int o = one.size(), z = zero.size();
   // for(int k = 0; k < n; k++) {
   //   if(a[k] == '0' and i < z) {
   //   	now = zero[i];
   //   	i++;
   //   }
   //   if(a[k] == '1' and j < o) {
   //   	now = one[j];
   //   	j++;
   //   }
   //   if(now <= last) break;
   //   cnt++;
   //   last = now;
   // }
   // cout << cnt << "\n";
   int cnt = 0, j = 0;
   for(int i = 0; i < m; i++) {
   	if(j < n and b[i] == a[j]) {
   	  j++; cnt++;
   	}
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