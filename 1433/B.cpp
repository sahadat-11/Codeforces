//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   bool flag = false;
   int cnt = 0, ans = 0, last = -1;
   for(int i = 0; i < n; i++) {
   	if(v[i] == 1) {
   		if(!flag) {
   		  last = i; flag = true;
   		  cnt = 0;
   		}
   		else {
   			ans += (i - last - 1);
   			last = i;
   		}
   	}
   	else {
   		if(flag) cnt++;
   	}
   }
   cout << ans << "\n";
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