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
   vector<int> v1 = v;
   sort(v1.begin(), v1.end());
   int mn = *min_element(v1.begin(), v1.end());
   for(int i = 0; i < n; i++) {
   	if(v[i] != v1[i] and (v[i] % mn != 0)) flag = false;
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