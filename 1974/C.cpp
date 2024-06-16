//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   map<pair<int, int>, int> mp1;
   map<int, pair<int, int>> mp2;
   for(int i = 1; i < n; i++) {
   	int x = a[i - 1], y = a[i];
   	mp1[{x, y}]++;
   	if(i == 1) continue;
   	int z = a[i - 2];
   	mp[z] = 
   }
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