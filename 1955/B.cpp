//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, c, d; cin >> n >> c >> d; int a[n][n], b[n][n];
   int mn = INT_MAX;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
    	cin >> a[i][j];
    	mn = min(mn, a[i][j]);
    	mp[a[i][j]]++;
    } 
   }
   b[0][0] = mn;
   for(int i = 1; i < n; i++) {
   	b[i][0] = b[i - 1][0] + c;
   }
   for(int i = 0; i < n; i++) {
   	for(int j = 1; j < n; j++) {
   	  b[i][j] = b[i][j - 1] + d;
   	}
   }
   // for(int i = 0; i < n; i++) {
   //  for(int j = 0; j < n; j++) {
   //    cout << b[i][j] << " ";
   //  }
   //  cout << "\n";
   // }
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(mp[b[i][j]] == 0) {
      	cout << "NO\n"; return;
      }
      mp[b[i][j]]--;
    }
   }
   cout << "YES\n";
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