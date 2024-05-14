//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n + 1), b(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   for(int i = 1; i <= n; i++) {
     cin >> b[i];
   }
   vector<pair<int, int>> dif;
   for(int i = 1; i <= n; i++) {
   	int x = a[i] - b[i];
    dif.push_back({x, i});
   }
   sort(dif.begin(), dif.end());
   // for(int i = 0; i < n; i++) {
   // 	cout << dif[i].first << " " << dif[i].second << "\n";
   // }
   vector<int> x;
   int cnt = 0, sum1 = 0, sum2 = 0;
   for(int i = 0; i < n; i++) {
   	if(dif[i].first <= 0) {
   	  sum1 += a[dif[i].second];
   	  sum2 += b[dif[i].second];
   	  x.push_back(b[dif[i].second]);
   	}
   }
   cout << sum1 << " " << sum2 << "\n";
   sort(x.rbegin(), x.rend());
   for(int i = 0; i < k; i++) {
   	
   	sum2 -= x[i];
   }
   cout << sum1 << " " << sum2 << "\n";
   cout << sum2 - sum1 << "\n";
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