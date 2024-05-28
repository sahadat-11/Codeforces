//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   int ans = 0;
   for(int i = 1; i * i <= n; i++) {
   	 if(n % i == 0 and n / i >= k) {
   	 	ans = max(ans, i);
   	 }
   	 if(n % i == 0 and i >= k) {
   	 	ans = max(ans, n / i);
   	 } 
   }
   cout << ans << "\n";
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