//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+ 7, mod = 1e9 + 7;
#define int long long
vector<int> g[N];
bool vis[N];
int cnt;

void dfs(int u) {
	vis[u] = true;
	cnt++;
	for(auto v : g[u]) {
		if(!vis[v]) {
			dfs(v);
		}
	}
}

void solve() {
   int n; cin >> n;
   vector<int> a(n + 1), b(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   for(int i = 1; i <= n; i++) {
     cin >> b[i];
   }
   for(int i = 1; i <= n; i++) {
   	for(int j = 1; j <= n; j++) {
   	  if(i != j and a[i] - a[j] >= b[i] - b[j]) {
   	  	g[i].push_back(j);
   	  }
   	}
   }
   // for(int i = 1; i <= n; i++) {
   // 	cout << i << ": ";
   // 	for(auto u : g[i]) {
   // 	  cout << u << " ";
   // 	}
   // 	cout << "\n";
   // }
   vector<int> ans;
   for(int i = 1; i <= n; i++) {
   	 cnt = 0;
   	 dfs(i);
   	 if(cnt == n) {
   	 	ans.push_back(i);
   	 }
   	 for(int j = 1; j <= n; j++) {
       vis[j] = false;
   	 }
   }
   for(int i = 1; i <= n; i++) {
   	g[i].clear();
   }
   cout << (int)ans.size() << "\n";
   for(auto u : ans) {
   	cout << u << " ";
   }
   cout << "\n";
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

// O(N * N)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n; int a[n], b[n], c[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for(int i = 0; i < n; i++) {
    c[i] = a[i] - b[i];
  }
  int mx = *max_element(c, c + n);
  vector<int> v;
  for(int i = 0; i < n; i++) {
    if(c[i] == mx) v.push_back(i + 1); 
  }
  cout << v.size() << "\n";
  for(auto u : v) cout << u << " ";
  cout << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}

// https://prnt.sc/0nnnGMV58eUJ

#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N], b[N];
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    int mx = INT_MIN;
    for (int i = 1; i <= n; i++) mx = max(mx, a[i] - b[i]);
    int c = 0;
    for (int i = 1; i <= n; i++) c += (a[i] - b[i] == mx);
    cout << c << "\n";
    for (int i = 1; i <= n; i++) {
      if (a[i] - b[i] == mx) cout << i << ' ';
    }
    cout << "\n";
  }
}