//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   bool flag = false;
   for(int i = 1; i < n; i++) {
   	if(s[i] != s[i - 1]) {
   		flag = true;
   		swap(s[i], s[i - 1]); break;
   	}
   }
   if(flag) {
   	 cout << "YES\n";
   	 cout << s << "\n";
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