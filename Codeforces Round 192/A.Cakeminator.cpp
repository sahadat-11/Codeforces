//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int r, c; cin >> r >> c;
  int a[r + 1] = {0}, b[c + 1] = {0};
  int ans = r * c;
  for(int i = 1; i <= r; i++) {
    for(int j = 1; j <= c; j++) {
      char c; cin >> c;
      if(c == 'S') {
        a[i] = 1;
        b[j] = 1;
      }
    }
  }
  for(int i = 1; i <= r; i++) {
    for(int j = 1; j <= c; j++) {
      if(a[i] and b[j]) ans--;
    }
  }
  cout << ans << endl;
  
  return 0; 
}
