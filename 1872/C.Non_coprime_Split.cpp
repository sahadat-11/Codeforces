//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int l, r; cin >> l >> r;
  for(int i = l; i <= r; i++) {
    for(int j = 2; j * j <= i; j++) {
      if(i % j == 0) {
        cout << j << " " << i - j << "\n";
        return;
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
