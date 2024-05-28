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
   }
   if(n & 1) cout << "Mike\n";
   else {
   	int x;
   	int mn = *min_element(v.begin(), v.end());
   	for(int i = 0; i < n; i++) {
   	  if(v[i] == mn) {
   	  	x = i; break;
   	  }
   	}
   	if(x & 1) cout << "Mike\n";
    else cout << "Joe\n";
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