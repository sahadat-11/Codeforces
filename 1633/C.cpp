//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int h1, d1, h2, d2, k, w, a;
   cin >> h1 >> d1 >> h2 >> d2 >> k >> w >> a;
   for(int i = 0; i <= k; i++) {
   	int h3 = h1 + (a * i);
   	int d3 = d1 + (w * (k - i));
   	int x = h2 / d3;
   	if(h2 % d3) x++;
   	int y = h3 / d2;
   	if(h3 % d2) y++;
   	if(y >= x) {
   		cout << "YES\n"; return;
   	}
   }
   cout << "NO\n";
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