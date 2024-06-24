//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m;
   string s; cin >> n >> m >> s;
   vector<int> a(m);
   for(int i = 0; i < m; i++) {
    cin >> a[i]; 
   }
   string x; cin >> x;
   map<int, char> mp;
   for(int i = 0; i < m; i++) {
   	if(mp.find(a[i]) != mp.end()) {
   	  mp[a[i]] = min(mp[a[i]], x[i]);
   	}
   	else mp[a[i]] = x[i];
   }
   string xx;
   vector<int> ans;
   for(auto [val, ch] : mp) {
     //cout << val << " " << ch << '\n';
     xx.push_back(ch);
     ans.push_back(val - 1);
   }
   sort(x.begin(), x.end());
   sort(ans.begin(), ans.end());
   for(int i = 0; i < (int)ans.size(); i++) {
   	s[ans[i]] = x[i];
   	//cout << x[i] << " ";
   }
   cout << s << "\n";
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