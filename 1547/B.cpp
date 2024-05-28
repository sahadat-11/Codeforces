//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size(), x = -1;
   //s = '@' + s;
   for(int i = 0; i < (int)s.size(); i++) {
   	if(s[i] == 'a') x = i;
   }
   bool flag = true;
   if(x == -1) {
   	cout << "NO\n"; return;
   }
   int i = 1, j = 1; int y = 1;
   while(x - i >= 0 or x + j < n) {
   	if((x + j < n) and s[x + j] == char(y + 'a')) {
   		j++; y++;
   	}
   	else if((x - i >= 0) and s[x - i] == char(y + 'a')) {
       i++; y++;
   	}
   	else {
   	  flag = false; break;
   	}
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