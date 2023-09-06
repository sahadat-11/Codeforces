//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int s; cin >> s;
  vector<int> v;
  for(int i = 9; i >= 1; i--) {
    if(s >= i) {
      v.push_back(i);
      s -= i;
    }
  }
  reverse(v.begin(), v.end());
  for(auto u : v) cout << u;
  cout << "\n";
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
