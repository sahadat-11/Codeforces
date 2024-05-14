//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int h, m; char c; cin >> h >> c >> m;
   if(h <= 11 and h >= 0) {
   	if(h == 0) h = 12;
   	if(h < 10) {
   	  cout << 0;
   	}
   	cout << h << ":";
   	if(m < 10) cout << 0;
    cout << m << " AM\n";
   }
   else {
   	h %= 12;
   	if(h == 0) h = 12;
   	if(h < 10) {
   	  cout << 0;
   	}
   	cout << h << ":";
   	if(m < 10) cout << 0;
    cout << m << " PM\n";
   }
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