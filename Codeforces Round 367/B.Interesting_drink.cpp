//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int q; cin >> q;
  while(q--) {
    int x; cin >> x;
    cout << upper_bound(a, a + n, x) - a << "\n";
  }
  return 0;
}
