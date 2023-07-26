//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n;
  for(int i = 0; i < 100; i++) {
    for(int j = 0; j < 100; j++) {
      for(int k = 0; k < 100; k++) {
        if((i * 3 + j * 5 + k * 7) == n) {
          cout << i << " " << j << " " << k << "\n";
          return;
        } 
      }
    }
  }
  cout << -1 << "\n";
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