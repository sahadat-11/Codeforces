//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
  int n; cin >> n; string s; cin >> s;
  int p = 0, ne = 0;
  for(auto u : s) {
    if(u == '+') p++;
    else ne++;
  }
  cout << abs(p - ne) << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}