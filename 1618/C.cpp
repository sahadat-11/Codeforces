//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int gcd1 = 0, gcd2 = 0;
   for(int i = 0; i < n; i += 2) {
     gcd1 = __gcd(gcd1, v[i]);
   }
   for(int i = 1; i < n; i += 2) {
     gcd2 = __gcd(gcd2, v[i]);
   }
   bool flag1 = true, flag2 = true;
   for(int i = 1; i < n; i += 2) {
    if(v[i] % gcd1 == 0) {
      flag1 = false;
    }
   }
   for(int i = 0; i < n; i += 2) {
    if(v[i] % gcd2 == 0) {
      flag2 = false;
    }
   }
   //cout << flag1 << " " << flag2 << endl;
   if(!flag1 and !flag2) cout << "0\n";
   else if(flag1) cout << gcd1 << "\n";
   else cout << gcd2 << "\n";
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