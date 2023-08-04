//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
vector<int> g[N];
int dep[N];

void dfs(int u, int p) {
  dep[u] = dep[p] + 1;
  for(auto v : g[u]) {
    if(v != p) {
      dfs(v, u);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; 
  for(int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1, 0);
  int white = 0, black = 0;
  for(int i = 1; i <= n; i++) {
    //cout << dep[i] <<" ";
    if(dep[i] % 2) black++;
    else white++; 
  }
  //cout << black << " " << white << "\n";
  cout << (1ll*black * white) - n + 1;
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9;
vector<int> adj[N];
int main() {
  int n; cin >> n;
  for(int i = 1; i < n; i++) {
      int u, v; cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
    vector<int> dis(n + 1, inf);
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while(!q.empty()) {
      int u = q.front();
      q.pop();
      for(auto v : adj[u]) {
        if(dis[u] + 1 < dis[v]) {
          dis[v] = dis[u] + 1;
          q.push(v);
        }
      }
    }
    int black = 0, white = 0;
    for(int i = 1; i <= n; i++) {
      if(dis[i] % 2) black++;
      else white++;
    }
    //cout << black << " " << white << "\n";
    cout << 1ll*black * white - n + 1;
  return 0;
}

