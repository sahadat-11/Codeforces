//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   string s[n];
   for(int i = 0; i < n; i++ ) cin >> s[i];
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
   	 if(s[i][j] == '#') {
   	 	cout << i + 1 << " " << j + 1 << "\n";
   	 	return;
   	 }
   	}
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