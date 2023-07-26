//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    bool neg = false;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] < 0) neg = true;
    }
    int mx = *max_element(a, a + n);
    int mn = *min_element(a, a + n);
    if(neg) cout << mn << "\n";
    else cout << mx << "\n";
  }
  return 0;
}
