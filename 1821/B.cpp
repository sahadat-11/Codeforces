//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1), b(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   for(int i = 1; i <= n; i++) {
     cin >> b[i];
   }
   bool f = false; int l = 0, r = 0, mx = 0, mn = INT_MAX;
   for(int i = 1; i <= n; i++) {
   	if(a[i] != b[i] and !f) {
   	  l = i; r = i; f = true;
   	  mx = max(mx, a[i]); mn = min(mn, a[i]);
   	}
   	if(a[i] != b[i] and f) {
   	  r = i;
   	  mx = max(mx, a[i]); mn = min(mn, a[i]);
   	}
   }
   //cout << l << " " << r << " ";
   for(int i = l - 1; i >= 1; i--) {
   	if(a[i] <= mn) {
   	  l--; mn = a[i];
   	} 
   	else break;
   }
   for(int i = r + 1; i <= n; i++) {
   	if(a[i] >= mx) {
   	  r++; mx = a[i];
   	} 
   	else break;
   }
   cout << l << " " << r << "\n";
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