//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i] >> b[i];
   }
   bool flag = true;
   for(int i = 1; i < n; i++) {
     if(a[i] >= a[0] and b[i] >= b[0]) {
     	cout << "-1\n"; return;
     }
   }
   cout << a[0] << "\n";
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