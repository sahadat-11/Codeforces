//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, p; cin >> n >> p;
   vector<int> a(n), b(n);
   vector<pair<int, int>> v;
   for(int i = 0; i < n; i++) {
    cin >> a[i]; 
   }
   for(int i = 0; i < n; i++) {
    cin >> b[i]; 
   }
   for(int i = 0; i <n; i++) {
   	v.push_back({b[i], -a[i]});
   }
   sort(v.begin(), v.end());
   // for(int i = 0; i < n; i++) {
   //  cout << v[i].first << " " << v[i].second << endl; 
   // }
   int rem = n - 1;
   int sum = p;
   for(int i = 0; i < n; i++) {
   	 int y = -v[i].second;
   	 int xx = v[i].first * (min(rem, y));
   	 int yy = p * min(rem, y);
     sum += min(xx, yy);
     rem -= y;
     if(rem <= 0) break;
   }
   cout << min(p * n, sum) << "\n";
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