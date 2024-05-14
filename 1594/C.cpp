//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; char c; string s; cin >> n >> c >> s;
   bool flag = true;
   for(int i = 0; i < n; i++) {
   	if(s[i] != c) flag = false;
   }
   if(flag) cout << "0\n";
   else {
   	for(int x = 2; x <= n; x++) {
   	 bool f = true;
   	 for(int i = x - 1; i < n; i += x) {
   	 	if(s[i] != c) f = false;
   	 }
   	 if(f) {
   	   cout << 1 << "\n";
   	   cout << x << "\n"; return;
   	 }
   	}
    cout << 2 << "\n";
    cout << n - 1 << " " << n << "\n";
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
