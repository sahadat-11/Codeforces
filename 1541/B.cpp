//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   map<int, int> mp;
   for(int i = 1; i <= n; i++) {
     mp[a[i]] = i;
   }
   sort(a.begin(), a.end());
   //sort(a.begin(), a.end());
   int ans = 0;
   for(int i = 1; i <= n; i++) {
   	for(int j = i + 1; j <= n; j++) {
   	  if(a[i] * a[j] == mp[a[i]] + mp[a[j]]) ans++;
   	  if(a[i] * a[j] > 2 * n) break;
   	}
   }
   cout << ans << "\n";
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