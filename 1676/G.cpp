//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e4 + 7;
vector<int> g[N];
int subtree_black[N], subtree_white[N], val[N];
string s;

void dfs(int vertex, int par) {
  if(s[vertex - 1] == 'B') {
    subtree_black[vertex]++;
  }
  if(s[vertex - 1] == 'W') {
    subtree_white[vertex]++;
  }
	for(auto child : g[vertex]) {
		if(child != par) {
			dfs(child, vertex);
      subtree_black[vertex] += subtree_black[child];
      subtree_white[vertex] += subtree_white[child];
		}
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    for(int u = 2; u <= n; u++) {
      int v; cin >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    // for(int u = 1; u <= n; u++) {
    //   cout << u << "-> ";
    //   for(auto v : g[u]) {
    //     cout << v << " ";
    //   }
    //   cout << "\n";
    // }
    cin >> s;
    dfs(1, 0);
    int ans = 0;
    for(int i = 1; i <= n; i++) {
      //cout << subtree_black[i] << " " << subtree_white[i] << "\n";
      if(subtree_black[i] == subtree_white[i]) {
        ans++;
      }
    }
    cout << ans << "\n";
    for(int i = 1; i <= n; i++) {
      g[i].clear();
      subtree_white[i] = 0;
      subtree_black[i] = 0;
    }
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 2; i <= n; i++) {
     cin >> a[i];
   }
   string s; cin >> s;
   vector<int> cnt(n + 1, 0);
   int ans = 0;
   for(int i = n; i >= 1; i--) {
    if(s[i - 1] == 'B') cnt[i]++;
    else cnt[i]--;
    if(cnt[i] == 0) ans++;
    cnt[a[i]] += cnt[i];
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}