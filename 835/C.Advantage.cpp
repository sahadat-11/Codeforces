//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
    }
    sort(b, b + n);
    int mx = b[n - 1], smx = b[n - 2];
    for(int i = 0; i < n; i++) {
      if(a[i] == mx) {
        cout << a[i] - smx<< " ";
      }
      else cout << a[i] - mx << " ";
    }
    cout << "\n";
  }
  return 0;
}
