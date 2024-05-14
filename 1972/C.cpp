//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n);
   vector<pair<int, int>> b;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     b.push_back({a[i], i});
   }
   if(n == 1) {
   	cout << n + k << "\n"; return;
   }
   sort(b.begin(), b.end());
   if(b[1].first - b[0].first >= k) {
   	int x = min(k, (b[1].first - b[0].first));
   	k -= x;
   	b[0].first += x;
   }
   //cout << k << "\n";
   for(int i = 1; i < n; i++) {
     int x = b[i].first - b[i - 1].first;
     if(x <= k) {
       b[i - 1].first += x;
       k -= x;
     }
     else break;
   }
   int x = k / n;
   for(int i = 0; i < n; i++) {
   	b[i].first += x;
    a[b[i].second] = b[i].first;
   }
   // cout << k % n << "\n";
   // for(int i = 0; i < n; i++) {
   //  cout << b[i].second << " "; 
   // }
   // cout << "\n";
   int mn = b[0].first;
   int ans = mn * n - (n - 1);
   cout << ans << " ";
   k %= n;
   // if(k >= 2) {
   //  ans += 2;
   // }
   // // if(b[0].first )
   // // for(int i = 0; i < n; i++) {
   // //  cout << a[i] << " "; 
   // // }
   // // cout << "\n";
   // else {
   //  if(mn == a[0] and mn != a[n - 1]) {
   //  if(k) ans += 2;
   //  else ans++;
   // }
   // else if(mn == a[n - 1] and mn != a[0]) {
   //  if(k) ans += 2;
   //  else ans++;
   // }
   //  else if(mn != a[n - 1] and mn != a[0]) {
   //  ans += 2;
   // }
   // }
   
   cout << ans + k << "\n";
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