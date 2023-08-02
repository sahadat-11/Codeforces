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