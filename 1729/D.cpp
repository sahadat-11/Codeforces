//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n), dif(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   for(int i = 0; i < n; i++) {
     cin >> b[i];
   }
   for(int i = 0; i < n; i++) {
    dif[i] = b[i] - a[i]; 
   }
   sort(dif.begin(), dif.end());
   int cnt = 0, l = 0, r = n - 1;
   while(l < r) {
   	int x = dif[l] + dif[r];
   	if(x >= 0) {
   	  cnt++;
   	  l++; r--;
   	}
   	else l++;
   }
   cout << cnt << "\n";
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