//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   int sum = 0;
   int cnt = 0;
   mp[0]++;
   for(int i = 0; i < n; i++) {
   	sum += v[i];
   	if(mp.find(sum) != mp.end()) {
      cnt += 1;
      mp.clear();
      sum = v[i];
      mp[0]++;
   	}
   	mp[sum]++;
   }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}