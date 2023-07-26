//In The Name of ALLAH
#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k; int a[n];
  for (int i = 1; i <= n - 1; i++)  cin >> a[i];
  for (int i = 1; i <= n - 1;) {
    i = i + a[i];
    if (i == k) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";

  return 0;
}

// approach 2:

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5;
vector<int> adj[N];
bool vis[N];

void dfs(int u) {
  vis[u] = true;
  for(auto v : adj[u]) {
    if(!vis[v]) {
      dfs(v);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n - 1; i++) {
    int x; cin >> x;
    adj[i].push_back(x + i);
  }
  dfs(1);

  if(vis[k]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}