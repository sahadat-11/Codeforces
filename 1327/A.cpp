//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   if((n % 2) != (k % 2)) {
   	 cout << "NO\n";
   }
   else {
   	 ll odd_sum = 1ll * k * k;
   	 if(odd_sum <= n) cout << "YES\n";
   	 else cout << "NO\n";
   }
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