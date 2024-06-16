//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   queue<int> q;
   for(int i = 1; i <= n; i++) {
   	q.push(a[i]);
   	while(q.size() > q.front()) {
   	  q.pop();
   	}
   	cout << (int)q.size() << " ";
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