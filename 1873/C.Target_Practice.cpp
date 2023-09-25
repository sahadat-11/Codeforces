//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    char s[11][11];
    for(int i = 1; i <= 10; i++) {
      for(int j = 1; j <= 10; j++) cin >> s[i][j];
    }
    int a[11][11] = {0};
    for(int i = 1; i <= 10; i++) {
      for(int j = 1;j <= 10; j++) {
        if(i == 1 or i == 10 or j == 1 or j == 10) a[i][j] = 1; 
        else if(i == 2 or i == 9 or j == 2 or j == 9) a[i][j] = 2;
        else if(i == 3 or i == 8 or j == 3 or j == 8) a[i][j] = 3;
        else if(i == 4 or i == 7 or j == 4 or j == 7) a[i][j] = 4;
        else if(i == 5 or i == 6 or j == 5 or j == 6) a[i][j] = 5;
      }
    }
    // for(int i = 1; i <= 10; i++) {
    //   for(int j = 1;j <= 10; j++) {
    //     cout << a[i][j] << " "; 
    //   }
    //   cout << endl;
    // }
    int ans = 0;
    for(int i = 1; i <= 10; i++) {
      for(int j = 1;j <= 10; j++) {
        if(s[i][j] == 'X') ans += a[i][j];
      }
    }
    cout << ans << "\n";
  }
  return 0;
}