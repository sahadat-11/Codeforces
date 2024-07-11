//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        cin >> a[i][j];
    }
  }
  int XOR = 0;
  for(int i = 0; i < n; i++) {
    XOR = (XOR ^ a[i][0]);
  }
  if(XOR != 0) {
    cout << "TAK\n";
    for(int i = 0; i < n; i++) {
      cout << 1 << " ";
    }
    return 0;
  }
  for(int j = 1; j < m; j++) {
    for(int i = 0; i < n; i++) {
      XOR = (XOR ^ a[i][j]);
      XOR = (XOR ^ a[i][0]);
      if(XOR != 0) {
        cout << "TAK\n";
        for(int k = 0; k < i; k++) {
           cout << 1 << " ";
        }
        cout << j + 1 << " ";
        for(int k = i + 1; k < n; k++) {
           cout << 1 << " ";
        }
        return 0;
      }
    }
  }
  cout << "NIE\n";
  return 0;
}
