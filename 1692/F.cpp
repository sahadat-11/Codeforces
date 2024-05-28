//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     v[i] %= 10;
   }
   vector<int> ans;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
    if(mp[v[i]] < 3) {
      ans.push_back(v[i]);
    }
    mp[v[i]]++;
   }
   int x = ans.size();
   for(int i = 0; i < x; i++) {
   	for(int j = i + 1; j < x; j++) {
   	  for(int k = j + 1; k < x; k++) {
   	  	int sum = ans[i] + ans[j] + ans[k];
   	  	if(sum % 10 == 3) {
   	  	  cout << "YES\n"; return;
   	  	}
   	  }
   	}
   }
   cout << "NO\n";
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