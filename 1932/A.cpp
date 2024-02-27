//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int ind = n;
   for(int i = 0; i < n - 1; i++) {
   	if(s[i] == '*' and s[i + 1] == '*') {
   		ind = i;
   		break;
   	}
   }
   int cnt = 0;
   for(int i = 0; i < ind; i++) {
   	if(s[i] == '@') cnt++;
   }
   cout << cnt << '\n';
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