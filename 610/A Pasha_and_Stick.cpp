//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   if(n % 2) {
   	 cout << 0 << "\n";
   }
   else {
   	 n /= 2;
   	 if(n % 2) cout << n / 2 - 1;
   	 else cout << n / 2;
   }
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