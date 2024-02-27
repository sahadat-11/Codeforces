//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int sum = 0;
   for(int i = 0; i < n; i++) sum += v[i];
   // cout << sum / n << "\n";
   	int x = sum / n;
   sum = 0;
   bool flag = true;
   for(int i = 0; i < n; i++) {
   	 sum += v[i];
   	 if(sum / (i + 1) < x) flag = false;
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