//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   string ans;
   for(int i = n - 1; i >= 0; i--) {
   	if(s[i] != '0') {
   	  ans.push_back(s[i] - '0' + 'a' - 1);
   	}
   	else {
   	  string x = s.substr(i - 2, 2);
   	  //cout << x << "\n";
   	  int xx = stoi(x);
   	  ans.push_back(xx + 'a' - 1);
   	  i -= 2;
   	}
   	//cout << s[i] << " ";
   }
   reverse(ans.begin(), ans.end());
   cout << ans << "\n";
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