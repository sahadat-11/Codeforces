//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   bool flag = true;
   for(int i = 0; i < (int)s.size() - 1; i++) {
   	 if(s[i] == 'z' and s[i + 1] == 'a') continue;
   	 if(s[i] == 'z' and s[i + 1] != 'a') flag = false;
   	 else if((s[i] - 'a') != (s[i + 1] - 'a') - 1) flag = false;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}