//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j < n; j++) {
        cin >> a[i][j];
      }
    }
    int s = a[1][1];
    if(s != a[2][1]) s = a[3][1];
    cout << s << " ";
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j < n; j++) {
        if(a[i][1] != s) {
          cout << a[i][j] << " ";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}