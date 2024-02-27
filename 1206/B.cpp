//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll ans = 0, neg = 0, zero;
   for(int i = 0; i < n; i++) {
     if(v[i] < 0) neg++;
     if(v[i] == 0) zero++;
     ans += abs(abs(v[i]) - 1);
     //cout << ans << "\n";
   }
   if(neg % 2 and zero == 0) ans += 2; // if zero contain 0 k one operation a negative kora jave; then neg even hobe;
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}