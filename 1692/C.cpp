//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   char c[10][10];
   for(int i = 1; i <= 8; i++) {
   	for(int j = 1; j <= 8; j++) {
   	  cin >> c[i][j];
   	}
   }
   for(int i = 2; i <= 7; i++) {
   	for(int j = 2; j <= 7; j++) {
   	  if(c[i][j] == '#' and c[i - 1][j - 1] == '#' and c[i - 1][j + 1] == '#' and c[i + 1][j - 1] == '#' and c[i + 1][j + 1] == '#') {
   	  	cout << i << " " << j << "\n";
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