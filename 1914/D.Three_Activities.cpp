//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n], b[n], c[n];
   vector<pair<int, int>> v1, v2, v3;
   int ans = 0;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     v1.push_back({a[i], i});
   } 
   for(int i = 0; i < n; i++) {
     cin >> b[i];
     v2.push_back({b[i], i});
   }
   for(int i = 0; i < n; i++) {
     cin >> c[i];
     v3.push_back({c[i], i});
   }
   sort(v1.rbegin(), v1.rend());
   sort(v2.rbegin(), v2.rend());
   sort(v3.rbegin(), v3.rend());
   for(int i = 0; i < 3; i++) {
   	 for(int j = 0; j < 3; j++) {
   	 	for(int k = 0; k < 3; k++) {
   	 	  if(v1[i].second != v2[j].second and v1[i].second != v3[k].second and v2[j].second != v3[k].second) {
   	 	  	ans = max(ans, v1[i].first + v2[j].first + v3[k].first);
   	 	  }
   	 	}
   	 }
   }
   cout << ans << "\n";
}
int main() { 
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}