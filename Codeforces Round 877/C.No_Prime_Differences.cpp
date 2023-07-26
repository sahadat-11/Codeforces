//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, m; cin >> n >> m; int a[n + 1][m + 1];
    int val = 1;
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
         a[i][j] = val;
         val++;
      }
    }
    // for(int i = 1; i <= n; i++) {
    //   for(int j = 1; j <= m; j++) {
    //     cout << a[i][j] << " ";
    //   }
    // }
    for(int i = 2; i <= n; i += 2) {
      for(int j = 1; j <= m; j++) {
         cout << a[i][j] << " ";
      }
      cout << "\n";
    } 

    for(int i = 1; i <= n; i += 2) {
      for(int j = 1; j <= m; j++) {
         cout << a[i][j] << " ";
      }
      cout << "\n";
    }

  }
  return 0;
}
