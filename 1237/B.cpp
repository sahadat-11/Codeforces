//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1), b(n + 1), c(n + 1), pos(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++) {
    cin >> b[i];
  }

  for(int i = 1; i <= n; i++) {
    pos[b[i]] = i;
  }

  for(int i = 1; i <= n; i++) {
    c[i] = pos[a[i]];
  }
  
  // for(int i = 1; i <= n; i++) {
  //   cout << c[i] << "\n";
  // }

  int mx = -1, ans = 0;

  for(int i = 1; i <= n; i++) {
    if(c[i] > mx) {
      mx = c[i];
    }
    else ans++;
  }

  cout << ans << "\n";
  
  return 0;
}