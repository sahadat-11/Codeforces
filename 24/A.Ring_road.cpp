//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 107;
vector<pair<int, int>> adj[N];
bool vis[N];
int cost;

void dfs(int u, int p) {
  vis[u] = true;
  for(auto [v, w] : adj[u]) {
    if(!vis[v]) {
      dfs(v, u); 
      cost += w;
    }
    else if(v == 1 and p != 1) cost += w;
  }
}
int main() {
  int n; cin >> n; 
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    int u, v, w; cin >> u >> v >> w;
    adj[u].push_back({v, 0});
    adj[v].push_back({u, w});
    sum += w;
  }
  dfs(1, 0);
  cout << min(cost, sum - cost);
  return 0;
}