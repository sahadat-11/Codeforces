//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int x = *max_element(v.begin(), v.end());
   //cout << x << endl;
   int z = 0;
   for(int i = 0; i < n; i++) {
   	z = __gcd(z, x - v[i]);
   }
   int y = 0;
   for(int i = 0; i < n; i++) {
   	y += (x - v[i]) / z;
   }
   cout << y << " " << z << "\n";
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

// https://prnt.sc/lAFjTXMBzmTF