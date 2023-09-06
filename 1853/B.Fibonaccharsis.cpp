//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    int ans = 0;
    if(k > 30) {
      cout << 0 << "\n";
      continue;
    }
    for(int i = 0; i <= n; i++) {
      int second = n;
      int first = i;
      bool ok = true;
      for(int j = 1; j <= k - 2; j++) {
        int temp = second - first;
        second = first;
        first = temp;
        if(first <= second and first >= 0) {
          continue;
        }
        else {
          ok = false;
          break;
        }
      }
      if(ok) ans++;
    }
    cout << ans << "\n";
  } 
  return 0;
}