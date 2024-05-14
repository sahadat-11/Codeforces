//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, d; cin >> n >> d;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   sort(v.rbegin(), v.rend());
   int cnt = 0, rem = n;
   for(int i = 0; i < n; i++) {
   	int x = d / (v[i]) + 1;
   	if(rem >= x) {
   	  cnt++;
   	  rem -= x;
   	}
   	else break;
   }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}