//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   string s[n];
   for(int i = 0; i < n; i++) {
   	cin >> s[i];
   }
   bool flag = true;
   for(int i = 0; i < n; i++) {
     int cnt = 0;
   	 for(int j = 0; j < n; j++) {
   	 	if(s[i][j] == '1') cnt++;
   	 }
     if(cnt == 1) flag = false;
   }
   if(flag) cout << "SQUARE\n";
   else cout << "TRIANGLE\n";
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