//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
vector<int> g[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  
  int one = 0, two = 0;
  // total degree for each node
  for(int u = 1; u <= n; u++) {
    int x = g[u].size();
    if(x == 1) one++;
    if(x == 2) two++;
    cout << x << "\n";
  }
  if(two == n) cout << "ring topology\n";
  else if(one == 2 and two == n - 2) cout << "bus topology\n";
  else if(one == n - 1) cout << "star topology\n";
  else cout << "unknown topology\n";
  return 0;
}