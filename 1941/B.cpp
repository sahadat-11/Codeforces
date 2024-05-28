//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   bool flag = true;
   for(int i = 1; i < n - 1; i++) {
   	 int x = v[i - 1], y = v[i], z = v[i + 1];
   	 if(y < 2 * x) flag = false;
   	 v[i] -= (x * 2);
   	 v[i + 1] -= x;
   	 v[i - 1] -= x;
   	 //cout << v[i - 1] << " " << v[i] << " " << v[i + 1] << endl;
   }
   for(int i = 0; i < n; i++) {
   	if(v[i] != 0) flag = false;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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