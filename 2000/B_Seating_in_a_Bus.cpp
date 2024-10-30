//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   bool flag = true;
   map<int, int> mp;
   mp[a[0]]++;
   for(int i = 1; i < n; i++) {
    if(mp[a[i] - 1] == 0 and mp[a[i] + 1] == 0) {
      flag = false;
    }
    mp[a[i]]++;
   }
   if(flag) {
    cout << "YES\n";
   }
   else {
    cout << "NO\n";
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