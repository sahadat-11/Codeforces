//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int k, n, m; cin >> k >> n >> m;
   vector<int> a(n), b(m), c;
   int zero = 0;
   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }
   for(int i = 0; i < m; i++) {
    cin >> b[i];
   }
   int i = 0, j = 0;
   while(i < n and j < m) {
   	if(a[i] > b[j]) c.push_back(b[j]), j++;
   	else c.push_back(a[i]), i++;
   }
   while(i < n) c.push_back(a[i]), i++;
   while(j < m) c.push_back(b[j]), j++;
   bool flag = true;
   for(int i = 0; i < n + m; i++) {
   	if(c[i] == 0) zero++;
   	if(k + zero < c[i]) flag = false;
   }
   if(flag) {
   	for(auto u : c) cout << u << " "; cout << "\n";
   }
   else cout << "-1\n";
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