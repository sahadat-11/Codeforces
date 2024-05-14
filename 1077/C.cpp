//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n), pre(n, 0), ans;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     b[i] = a[i];
   }
   sort(b.begin(), b.end());
   if(n <= 2) {
   	cout << 0 << "\n"; return;
   }
   pre[0] = b[0];
   for(int i = 1; i < n; i++) {
   	pre[i] = pre[i - 1] + b[i];
   }
   for(int i = 0; i < n; i++) {
   	if(a[i] != b[n - 1]) {
   	  int x = b[n - 1];
   	  int y = pre[n - 2] - a[i];
   	  if(x == y) {
   	  	ans.push_back(i + 1);
   	  }
   	}
   	else {
   	  int x = b[n - 2];
   	  int y = pre[n - 3];
   	  if(x == y) {
   	  	ans.push_back(i + 1);
   	  }
   	}
   }
   cout << (int) ans.size() << "\n";
   for(auto u : ans) cout << u << " "; cout << "\n";
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