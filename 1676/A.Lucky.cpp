//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  string s; cin >> s;
  int sum1 = s[0] + s[1] + s[2];
  int sum2 = s[3] + s[4] + s[5];
  if(sum1 == sum2) cout << "YES\n";
  else cout << "NO\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}