//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int mx = 0, ans = 0;
   int n; cin >> n;
   for(int x = 2; x <= n; x++) {
   	 int sum = 0;
     for(int i = 1; i <= n; i++) {
       if(i * x <= n) {
       	sum += i * x;
       }
       else {
       	if(sum > mx) {
       		mx = sum;
       		ans = x;
       	}
       }
     }
   }
   cout << ans << "\n";
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