//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, f, k; cin >> n >> f >> k;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int x = a[f - 1], cnt = 0, indx;
   sort(a.rbegin(), a.rend());
   for(int i = 0; i < n; i++) {
   	if(a[i] == x) {
   	  indx = i + 1;
   	}
   	if(a[i] > x) {
   	  cnt++;
   	}
   }
   if(cnt >= k) cout << "NO\n";
   else if(indx > k) cout << "MAYBE\n";
   else cout << "YES\n";
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