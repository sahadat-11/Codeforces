//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
  int n; string s; cin >> n >> s;
  int l = 0, r = 0, u = 0, d = 0;
  for(int i = 0; i < n; i++) {
  	if(s[i] == 'U') u++;
  	if(s[i] == 'D') d++;
  	if(s[i] == 'L') l++;
  	if(s[i] == 'R') r++;
  }
  cout << 2 * min(l, r) + 2 * min(u, d) << "\n"; 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/fYKt-k-uYVg7