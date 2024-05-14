//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
bool vis[N], ok;
int col[N];
vector<int> g[N];

void dfs(int u) {
	vis[u] = true;
	for(auto v : g[u]) {
		if(!vis[v]) {
			col[v] = col[u] ^ 1;
			dfs(v);
		}
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; // n = node m = edge
  for(int i = 1; i <= n; i++) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  ok = true;
  for(int i = 1; i <= n; i++) {
  	if(!vis[i]) {
  	  dfs(i);
  	}
  }
  int black = 0, white = 0;
  for(int i = 1; i <= n; i++) {
  	//cout << col[i] << " ";
  	if(col[i]) white++;
  }
  black = n - white;
  cout << black * white - (n - 1);
  return 0;
}


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
