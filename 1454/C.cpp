//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
//#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   vector<int> v1;
   v1.push_back(v[0]);
   for(int i = 1; i < n; i++) {
   	if(v[i] != v[i - 1]) v1.push_back(v[i]);
   }
   map<int, int> mp;
   for(int i = 0; i < (int)v1.size(); i++) {
     mp[v1[i]]++;
   }
   mp[v1[0]]--;
   mp[v1[(int)v1.size() - 1]]--;
   int mnoc = n;
   for(auto [val, fre] : mp) {
     mnoc = min(mnoc, fre);
   }
   cout << mnoc + 1 << "\n";
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