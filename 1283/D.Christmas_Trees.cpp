// // //In The Name of ALLAH
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // int main() {
// //   ios_base::sync_with_stdio(0);
// //   cin.tie(0);
// //   int n, m; cin >> n >> m;
// //   queue<int> q;
// //   map<int, int> dis;
// //   for(int i = 1; i <= n; i++) {
// //     int x; cin >> x;
// //     q.push(x);
// //     dis[x] = 0;
// //   }
// //   vector<int> ans;
// //   ll sum = 0;
// //   while(!q.empty() and m > 0) {
// //     int u = q.front();
// //     q.pop();
// //     if(dis.find(u - 1) == dis.end() and m > 0) {
// //       dis[u - 1] = dis[u] + 1;
// //       sum += dis[u - 1];
// //       q.push(u - 1);
// //       ans.push_back(u - 1);
// //       m--;
// //     }
// //     if(dis.find(u + 1) == dis.end() and m > 0) {
// //       dis[u + 1] = dis[u] + 1;
// //       sum += dis[u + 1];
// //       q.push(u + 1);
// //       ans.push_back(u + 1);
// //       m--;
// //     }
// //   }
// //   cout << sum << "\n";
// //   for(auto u : ans) cout << u << " ";
// //   return 0;
// // } 


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
   
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  vector<int> trees(n + 1);
  for(int i = 1; i <= n; i++) cin >> trees[i];
  queue<int> q;
  map<int, int> dis;
  for(int i = 1; i <= n; i++) {
    q.push(trees[i]);
    dis[trees[i]] = 0;
  }
  vector<int> ans;
  int sum = 0;

  while(!q.empty() and m) {
    int u = q.front();
    q.pop();
    if(dis.find(u + 1) == dis.end() and m) {
      dis[u + 1] = dis[u] + 1;
      q.push(u + 1);
      m--;
      ans.push_back(u + 1);
      sum += dis[u + 1];
    }
    if(dis.find(u - 1) == dis.end() and m) {
      dis[u - 1] = dis[u] + 1;
      q.push(u - 1);
      m--;
      ans.push_back(u - 1);
      sum += dis[u - 1];
    }
  }
  cout << sum << "\n";
  for(auto p : ans) cout << p << " ";
  return 0;
}