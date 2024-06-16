//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(m), cnt(n, 0);
   for(int i = 0; i < m; i++) {
     cin >> a[i];
     cnt[a[i] - 1]++;
   }
   sort(cnt.begin(), cnt.end());
   // for(int i = 0; i < n; i++) {
   // 	cout << cnt[i] << " ";
   // }
   // cout << "\n";
   int l = 0, r = n - 1;
   while(l <= r) {
   	//cout << cnt[l] << " " << cnt[r] << "\n";
   	while(cnt[l] + 2 < cnt[r]) {
   	  cnt[l] += 2;
   	  cnt[r] -= 1;
   	}
   	//cout << cnt[l] << " " << cnt[r] << "\n";
   	l++; r--;
   }
   sort(cnt.begin(), cnt.end());
   // for(int i = 0; i < n; i++) {
   // 	cout << cnt[i] << " ";
   // }
   //cout << "\n";
   cout << cnt[n - 1] << "\n";
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