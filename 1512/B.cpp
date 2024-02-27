//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n; string s[n];
   for(int i = 0; i < n; i++) cin >> s[i];
   int a = -1, b = -1, c = -1, d = -1;
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < n; j++) {
   	  if(s[i][j] == '*' and a != -1) {
   	  	c = i; d = j;
   	  }
   	  else {
   	  	a = i; b = j;
   	  }
   	}
   }
   //cout << a << " " << b << " " << c << " " << d << endl;
   if(a != c) {
   	s[c][b] = '*';
   	s[a][d] = '*';
   }
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < n; j++) {
   	  cout << s[i][j];
   	}
   	cout << "\n";
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