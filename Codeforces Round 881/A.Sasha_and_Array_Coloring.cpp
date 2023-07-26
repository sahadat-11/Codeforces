//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int ans = 0;
    for(int i = 0; i < n / 2; i++) {
      ans += a[n - 1 - i] - a[i];
    }
    cout << ans << "\n";
  }
  return 0;
}
