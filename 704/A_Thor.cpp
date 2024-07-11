//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 7, mod = 1e9 + 7;
int cnt[N], z[N], a[N];
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  int ans = 0, c = 0, i = 0;
  while(q--) {
    int ty, x; cin >> ty >> x;
    if(ty == 1) {
      cnt[x]++;
      ans++;
      z[++c] = x; // kon position a k ase
    }
    else if(ty == 2) {
      ans -= cnt[x];
      cnt[x] = 0;
      a[x] = c;// kontake zero korlam tar track 
    }
    else {
        while(i <= x) {
            if(i > a[z[i]]) {
                ans--;
                cnt[z[i]]--;
            }
            i++;
        }
    }
    cout << ans << "\n";
  }
  return 0;
}