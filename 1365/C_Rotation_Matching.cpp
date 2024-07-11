//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> pos(n + 1, 0);
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    pos[x] = i;
  }
  vector<int> shift(n + 1, 0);
  for(int i = 0; i < n; i++) {
    int y; cin >> y;
    int j = pos[y];
    if(i <= j) {
        shift[j - i]++;
    }
    else {
        shift[n - i + j]++;
    }
  }
  int ans = 0;
  for(auto u : shift) {
    ans = max(ans, u);
  }
  cout << ans << "\n";
  return 0;
}