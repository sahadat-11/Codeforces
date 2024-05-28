//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   int even = 0, odd = 0;
   for(int i = 0; i < n; i++) {
   	if(v[i] % 2) odd++;
   	else even++;
   }
   bool flag = false;
   for(int i = 1; i < n; i++) {
   	if(v[i] - v[i - 1] == 1) flag = true;
   }
   if(flag or ((even % 2 == 0) and (odd % 2 == 0))) {
   	cout << "YES\n";
   }
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