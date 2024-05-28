//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   int cnt1 = 0, cnt2 = 0;
   for(int i = 1; i <= n; i++) {
     if(v[i] <= v[k]) cnt1++;
     else break;
   }
   int ans = cnt1 - 1;
   if(k > cnt1) {
   	if(cnt1 != 0) cnt2++;
   	swap(v[cnt1], v[k]);
   }
   for(int i = cnt1 + 1; i < k; i++) {
   	 if(v[i] <= v[k]) cnt2++;
     else break;
   }
   cout << max(cnt1, cnt2) << "\n";
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