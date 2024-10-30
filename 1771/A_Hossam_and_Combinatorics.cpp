//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mp[a[i]]++;
   }
   sort(a.begin(), a.end());
   int x = a[0], y = a[n - 1];
   int cnt1 = mp[x], cnt2 = mp[y];
   if(x == y) {
     cout << 2 * cnt1 * (cnt1 - 1) / 2 << "\n";
   }
   else cout << 2 * cnt1 * cnt2 << "\n";
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