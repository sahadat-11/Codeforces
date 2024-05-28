//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   if(v[0] == v[n - 1]) {
   	 cout << "-1\n";
   }
   else {
   	vector<int> a, b;
   	for(int i = 0; i < n; i++) {
   	  if(v[i] == v[n - 1]) b.push_back(v[i]);
   	  else a.push_back(v[i]);
   	}
   	cout << (int)a.size() << " " << (int)b.size() << "\n";
   	for(auto u : a) cout << u << " "; cout << "\n";
   	for(auto u : b) cout << u << " "; cout << "\n";
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