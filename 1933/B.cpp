//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int sum = 0, two = 0, one =0;
   for(int i = 0; i < n; i++) {
     sum += v[i];
     if(v[i] % 3 == 1) one++;
     if(v[i] % 3 == 2) two++; 
   }
   int ans;
   if(sum % 3 == 0) ans = 0;
   else if(sum % 3 == 2) ans = 1;
   else if(sum % 3 == 1 and one) ans = 1;
   else ans = 2;
   cout << ans << "\n";
   //cout <<sum << " " << sum % 3 << " " << ans << "\n";
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