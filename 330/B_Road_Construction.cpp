//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  map<int, int> mp;
  while(m--) {
    int x, y; cin >> x >> y;
    mp[x]++; mp[y]++;
  }
  cout << n - 1 << "\n";
  for(int i = 1; i <= n; i++) {
    if(!mp[i]) {
        for(int j = 1; j <= n; j++) {
            if(i != j) {
                cout << i << " " << j << "\n";
            }
        }
        break;
    }
  }
  return 0;
}