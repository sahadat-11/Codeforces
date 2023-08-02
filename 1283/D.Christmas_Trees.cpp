//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  queue<int> q;
  map<int, int> dis;
  for(int i = 1; i <= n; i++) {
    int x; cin >> x;
    q.push(x);
    dis[x] = 0;
  }
  vector<int> ans;
  ll sum = 0;
  while(!q.empty() and m > 0) {
    int u = q.front();
    q.pop();
    if(dis.find(u - 1) == dis.end() and m > 0) {
      dis[u - 1] = dis[u] + 1;
      sum += dis[u - 1];
      q.push(u - 1);
      ans.push_back(u - 1);
      m--;
    }
    if(dis.find(u + 1) == dis.end() and m > 0) {
      dis[u + 1] = dis[u] + 1;
      sum += dis[u + 1];
      q.push(u + 1);
      ans.push_back(u + 1);
      m--;
    }
  }
  cout << sum << "\n";
  for(auto u : ans) cout << u << " ";
  return 0;
} 

