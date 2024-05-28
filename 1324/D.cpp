//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n), dif(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];
   int cnt = 0;
   // for(int i = 0; i < n; i++) {
   // 	for(int j = i + 1; j < n; j++) {
   // 	  if(a[i] + a[j] > b[i] + b[j]) {
   // 	  	cnt++;
   // 	  }
   // 	}
   // }
   for(int i = 0; i < n; i++) {
    dif[i] = a[i] - b[i];;
   	//cout << x << it << endl;
   }
   sort(dif.begin(), dif.end());
   for(int i = 0; i < n; i++) {
   	 if (dif[i] <= 0) continue;
     int it = lower_bound(dif.begin(), dif.end(), -dif[i] + 1) - dif.begin();
     cnt += (i - it);
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