//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; 
   getline(cin, s);
   int n = s.size();
   for(int i = 0; i < n; i++) {
   	s[i] = tolower(s[i]);
   }
   //cout << s << endl;
   if(s.find("be") != -1) cout << "YES";
   else cout << "NO";
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