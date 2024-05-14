//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
//#define int long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     if(mp.find(v[i]) == mp.end()) {
       mp[v[i]] = i + 1;
     }
   }
   //for(auto [val , indx] : mp) cout << val << " " << indx << endl;
   while(q--) {
   	int x; cin >> x;
   	cout << mp[x] << " "; //cout << "\n\n";
   	int xx = mp[x];
   	mp[x] = 1;
   	for(auto [val , indx] : mp) {
   	  if(val != x and indx < xx) mp[val]++;
   	}
   	//for(auto [val , indx] : mp) cout << val << " " << indx << endl;
   }
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