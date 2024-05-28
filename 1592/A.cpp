//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, h; cin >> n >> h;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   sort(v.rbegin(), v.rend());
   // //cout << v[0] << endl;
   // if(v[0] == 1) {
   // 	cout << h << "\n"; return;
   // }
   // int cnt = 0;
   // bool flag = true;
   // while(h > 0) {
   // 	if(flag) h -= v[0];
   // 	else h -= v[1];
   // 	flag ^= true;
   // 	cnt++;
   // 	cout << flag << endl;
   // }
   // //cout << cnt << "\n";
   int cnt = 0;
   int a = v[0], b = v[1];
   if(h % (a + b) == 0) cnt = 2 * (h / (a + b));
   else if(h % (a + b) <= a) cnt = 2 * (h / (a + b)) + 1;
   else cnt = 2 * (h / (a + b)) + 2;
   cout << cnt << "\n";
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