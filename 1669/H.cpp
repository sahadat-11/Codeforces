//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n);
   vector<int> cnt(35, 0);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int bit = 0; bit < 32; bit++) {
   	for(int i = 0; i < n; i++) {
   	  if((1ll << bit) & a[i]) {
   	  	cnt[bit]++;
   	  }
   	}
   }
   // for(int i = 0; i < 32; i++) {
   // 	cout << cnt[i] << " ";
   // }
   // cout << "\n";
   int AND = a[0];
   for(int i = 1; i < n; i++) {
   	AND = (AND & a[i]);
   }
   //cout << AND << "\n";
   for(int i = 30; i >= 0; i--) {
   	if(n - cnt[i] <= k) {
   	  k -= (n - cnt[i]);
   	  int mask = (1ll << i);
      AND |= mask;
   	}
   }
   cout << AND << "\n";
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