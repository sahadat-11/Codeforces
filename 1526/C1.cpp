//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), neg;
   int sum = 0, cnt = 0;
   priority_queue<int> pq;
   for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    cnt++;
    if(a[i] < 0) pq.push(abs(a[i]));
    if(sum < 0) {
      cnt--;
      sum += pq.top();
      pq.pop();
    } 
   }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}