//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, x; cin >> n >> k >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   sort(v.begin(), v.end());
   // for(int i = 0; i < n; i++) {
   //   cout << v[i] << " ";
   // }
   // cout << "\n";
   int cnt = 1;
   vector<int> dif;
   for(int i = 1; i < n; i++) {
    dif.push_back(v[i] - v[i - 1]);
   }
   sort(dif.begin(), dif.end());
   for(int i = 0; i < n - 1; i++) {
   	int xx = (dif[i] + x - 1) / x;
   	xx = max(0ll, xx - 1);
   	if(k >= xx) k -= xx;
   	else cnt++;
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, x; cin >> n >> k >> x;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   sort(a.begin(), a.end());
   vector<int> dif;
   for(int i = 1; i < n; i++) {
     if(a[i] - a[i - 1] > x) {
      dif.push_back(a[i] - a[i - 1]);
     }
   }
   // for(int i = 0; i < n; i++) {
   //   cout << a[i] << " ";
   // }
   // for(int i = 0; i < (int)dif.size(); i++) {
   //  cout << dif[i] << " "; 
   // }
   // cout << "\n";
   sort(dif.begin(), dif.end());
   int ans = 1 + (int)dif.size();
   for(int i = 0; i < (int)dif.size(); i++) {
      int xx = (dif[i] + x - 1) / x - 1;
      if(xx <= k) {
        ans--;
        k -= xx; 
      }
   }
   cout << ans << "\n";
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
