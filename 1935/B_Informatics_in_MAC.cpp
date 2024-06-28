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
   int x = 0, ind = n;
   for(int i = 0; i < n; i++) {
    if(a[i] != x) {
      ind = i;
      break;
    }
    x++;
   }
   vector<bool> used(n + 1, false);
   for(int i = ind; i < n; i++) {
    used[a[i]] = true;
   }
   int y = 0;
   for(int i = 0; i <= n; i++) {
    if(!used[i]) {
      y = i; break;
    }
   }
   //cout << x << " " << y << "\n";
   if(x != y) cout << "-1\n";
   else {
    cout << 2 << "\n";
    ind = max(ind, 1ll);
    cout << 1 << " " << ind << "\n";
    cout << ind + 1 << " " << n << "\n";
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