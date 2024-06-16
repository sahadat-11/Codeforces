//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e3 + 7, mod = 1e9 + 7;
#define int long long
string s;
vector<int> vec;
vector<int> g[N];
int nxt[N][N], dp[N][N];

int func(int u, int v) {
  if(u == v) return 1;
  int &ans = dp[u][v];
  if(ans != -1) return ans;
  ans = 0;
  if(s[u] == s[v]) {
  	ans = 2 + (nxt[u][v] == v ? 0 : func(nxt[u][v], nxt[v][u]));
  }
  else {
  	ans = max(func(u, nxt[v][u]), func(nxt[u][v], v));
  }
  return ans;
}

void dfs(int u, int p) {
  vec.push_back(u);
  for(auto v : g[u]) {
  	if(v != p) {
  	  dfs(v, u);
  	}
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n; cin >> s;
  	s = "." + s;
  	for(int i = 1; i < n; i++) {
  	  int u, v; cin >> u >> v;
  	  g[u].push_back(v);
  	  g[v].push_back(u);
  	}
    memset(dp, -1, sizeof dp);
  	for(int u = 1; u <= n; u++) {
  	  for(auto x : g[u]) {
  	  	vec.clear();
  	  	dfs(x, u);
        for(auto v : vec) {
          nxt[u][v] = x;
        }
  	  }
  	}
  	int ans = 0;
  	for(int u = 1; u <= n; u++) {
  	 for(int v = 1; v <= n; v++) {
  	 	ans = max(ans, func(u, v));
  	 }
  	}
  	cout << ans << "\n";
  	for(int u = 1; u <= n; u++) {
  	  g[u].clear();
  	}
  }
  return 0;
}
