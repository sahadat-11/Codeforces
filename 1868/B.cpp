//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   map<int, vector<int>> mp;
   for(int i = 1; i <= n; i++) {
   	 mp[a[i]].push_back(i);
   }
   int ans = INT_MAX;
   for(auto u : mp) {
   	 priority_queue<int> pq;
   	 int last = 0;
   	 for(auto j : u.second) {
   	 	pq.push(j - last - 1);
   	 	last = j;
   	 }
   	 pq.push(n - last);
   	 int x = pq.top(); pq.pop();
   	 pq.push(x / 2);
     ans = min(ans, pq.top());
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