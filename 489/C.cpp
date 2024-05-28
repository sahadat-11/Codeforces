//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
//#define int long long
void solve() {
   int n, sum; cin >> n >> sum;
   if((sum == 0 and n > 1) or n * 9 < sum) {
   	 cout << "-1 -1";
   	 return;
   }
   int sum1 = sum;
   vector<int> mx(n, 0), mn(n, 0);
   for(int i = 0; i < n; i++) {
   	if(sum > 0) {
   	  int x = min(9, sum);
   	  //cout << x << endl;
   	  mx[i] += x;
   	  sum -= x;
   	}
   }
   if(sum1) mn[0] = 1;
   sum1--;
   for(int i = n - 1; i >= 0; i--) {
    if(sum1 > 0) {
   	  int x = min(9, sum1);
   	  //cout << x << endl;
   	  mn[i] += x;
   	  sum1 -= x;
   	}
   }
   //reverse(mn.begin(), mn.end());
   for(auto u : mn) cout << u; cout << " ";
   for(auto u : mx) cout << u;
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