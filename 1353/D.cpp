//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
//#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1, 0);
   priority_queue<pair<int, pair<int, int>>> pq;
   pq.push({n, {-1, -n}});
   int x = 1;
   while(!pq.empty()) {
   	int l = -pq.top().second.first;
   	int r = -pq.top().second.second;
   	int indx = (r + l) / 2;
   	v[indx] = x;
   	x++;
   	pq.pop();
   	if(l == r) continue;
   	if(l < indx) {
   		pq.push({indx - l, {-l, -(indx - 1)}});
   	}
   	if(indx < r) {
   		pq.push({r - indx, {-(indx + 1), -r}});
   	}
   }
   for(int i = 1; i <= n; i++) {
     cout << v[i] << " "; 
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

// https://www.youtube.com/watch?v=SU6kR2zByAE