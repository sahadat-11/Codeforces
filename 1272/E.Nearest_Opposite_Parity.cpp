//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7, inf = 1e9;
vector<int> adj[N];
int ans[N], n;
void solve(vector<int> & even, vector<int> & odd) {
   queue<int> q;
   vector<int> d(n + 1, inf);
   for(auto u : even) {
     q.push(u);
     d[u] = 0;
   }
   while(!q.empty()) {
     int u = q.front();
     q.pop();
     for(auto v : adj[u]) {
       if(d[u] + 1 < d[v]) {
         d[v] = d[u] + 1;
         q.push(v);
       }
     }
   }
   for(auto u : odd) {
     ans[u] = d[u];
   }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n; int a[n + 1];
  vector<int> even, odd;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    if(a[i] % 2) odd.push_back(i);
    else even.push_back(i);
  }
  for(int i = 1; i <= n; i++) {
    int j = i - a[i];
    if(j >= 1) adj[j].push_back(i);
    j = i + a[i];
    if(j <= n) adj[j].push_back(i);
  }
  // for(int i = 1; i <= n; i++) {
  //   cout << i << ": ";
  //   for(auto u : adj[i]) cout << u << " ";
  //   cout << " \n";
  // }
  solve(even, odd);
  solve(odd, even);
  for(int i = 1; i <= n; i++) {
    if(ans[i] == inf) ans[i] = -1;
    cout << ans[i] << " ";
  }
  return 0;
} 

