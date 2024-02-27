//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, m; cin >> n >> m;
   int x = n - m + 1;
   ll mx = 1ll * x * (x - 1) / 2;
   int temp1 = n / m;
   int temp2 = n / m + 1;
   //cout << temp1 << " " << temp2 << "\n";
   int per1 = m - (n % m); // contain (n / m) for one team
   int per2 = m - per1; // contain (n / m + 1) for one team
   ll mn = 1ll * per1 * (1ll * temp1 * (temp1 - 1) / 2); // (1ll * temp1 * (temp1 - 1) / 2); its for one team
   mn += 1ll * per2 * (1ll * temp2 * (temp2 - 1) / 2);
   cout << mn << " " << mx << "\n";
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