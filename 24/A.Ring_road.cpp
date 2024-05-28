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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<pair<int, int> > g[N];
int total_cost, cur_cost;

void dfs(int u, int p) {
	vis[u] = true;
	for(auto [v, wt] : g[u]) {
		if(!vis[v]) {
			dfs(v, u);
			cur_cost += wt;
		}
		else if(v == 1 and p != 1) cur_cost += wt;
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; // n = node m = edge
  for(int i = 1; i <= n; i++) {
  	int u, v, wt; cin >> u >> v >> wt;
  	g[u].push_back({v, 0});
  	g[v].push_back({u, wt});
  	total_cost += wt;
  }
  dfs(1, 0);
  cout << min(cur_cost, total_cost - cur_cost);
  return 0;
}
