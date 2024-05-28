//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int gcd = 0;
   sort(v.begin(), v.end());
   for(int i = 1; i < n; i++) {
   	 gcd = __gcd(gcd, v[i] - v[i - 1]);
   }
   ll ans = 0;
   for(int i = 0; i < n - 1; i++) {
   	 ans += ((v[n - 1] - v[i]) / gcd);
   }
   int x = v[n - 1] - gcd, cnt = 1;
   for(int i = n - 2; i >= 0; i--) {
   	 if(v[i] != x) break;
   	 x -= gcd; cnt++;
   }
   cout << ans + cnt << "\n"; 

}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}