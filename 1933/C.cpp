//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, n; cin >> a >> b >> n;
   int cnt = 0; set<int> st;
   for(int i = 0; i < 30; i++) {
   	for(int j = 0; j < 30; j++) {
      int x = pow(a, i) * pow(b, j);
      if(x > n) break;
      if(n % x == 0) {
      	st.insert(x);
      }
   	}
   }
   cout << (int)st.size() << "\n";
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