//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
const int N = 1e5 + 7;
const int INF = 1e9 + 7;
vector<int> adj[N];
vector<int> cost(N, INF);
int dist[N][N];
int path[N];

void printpath(int n) {
    if(n != 1) printpath(path[n]);
    cout << n << " ";
}
void dijkstra(int source) {
    //priority_queue<pair<int,int>> pq;
    for(int i = 1; i <= n; i++) path[i] = i;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
    pq.push({0, source});
    cost[source] = 0;
    
    while(!pq.empty()) {
       auto v = pq.top();
       pq.pop();
       int parent_node = v.second;
       for(auto u : adj[parent_node]) {
         if(cost[u] > cost[parent_node] + dist[parent_node][u]) {
            cost[u] = cost[parent_node] + dist[parent_node][u];
            pq.push({cost[u], u});
            path[u] = parent_node;
         }
       }
    }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m; // n = node, m = edge;
  while(m--) {
    int u, v, wt; cin >> u >> v >> wt;
    adj[u].push_back(v);
    adj[v].push_back(u); // if undirected graph;
    dist[u][v] = wt;
    dist[v][u] = wt;
  }
  //int source; cin >> source;
  dijkstra(1);
  //for(int i = 1; i <= n; i++) cout << cost[i] << " ";
  if(cost[n] == INF) cout << -1;
  else  printpath(n);
  return 0;
}


