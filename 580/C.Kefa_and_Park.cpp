//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
int n, m; 
vector<int> g[N];
int cats[N];
int cons_cat[N], ans;

void dfs(int vertex, int par) {
  if(cats[vertex]) {
    cons_cat[vertex] = cons_cat[par] + 1;
    if(cons_cat[vertex] > m) return;
  }
  else {
    cons_cat[vertex] = 0;
  }

  bool is_leaf = true;
  for(auto child : g[vertex]) {
    if(child != par) {
      is_leaf = false;
      dfs(child, vertex);
    }
  }

  if(is_leaf) ans++;
  
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 1; i <= n; i++) cin >> cats[i];
  for(int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u); 
  }
  dfs(1, 0);
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
vector<int> adj[N];
bool vis[N];
int cats[N];
int x, cnt;
int consecutive_cat[N];

void dfs(int u, int p) {
  if(cats[u]) consecutive_cat[u] = consecutive_cat[p] + 1;
  else consecutive_cat[u] = 0;
  if(consecutive_cat[u] > x) return;
  bool is_leap = true;
  for(auto v : adj[u]) {
    if(v != p) {
      dfs(v, u);
      is_leap = false;
    }
  }
  if(is_leap) cnt++;
}
int main() {
  int n; cin >> n >> x; 
  for(int i = 1; i <= n; i++) cin >> cats[i];
  for(int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1, 0);
  cout << cnt << "\n";
  return 0;
}