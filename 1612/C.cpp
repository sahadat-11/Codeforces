//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int k, x; cin >> k >> x;
   int sum1 = k * (k + 1) / 2;
   int sum2 = k * (k - 1) / 2;
   int ans;
   //cout << sum1 << " " << sum2 << "\n";
   if(sum1 > x) {
   	 int l = 0, r = 2 * k - 1, ans = -1;
   	 while(l <= r) {
   	 	int mid = l + (r - l) / 2;
   	 	int sum3 = mid * (mid + 1) / 2;
   	 	if(sum3 < x) {
   	 		ans = mid;
   	 		l = mid + 1;
   	 	}
   	 	else r = mid - 1;
   	 }
   	 cout << min(2 * k - 1, ans + 1) << "\n";
   }
   else {
   	 int l = 0, r = 2 * k - 1, ans = -1;
   	 x -= sum1;
   	 while(l <= r) {
   	 	int mid = l + (r - l) / 2;
   	 	int sum3 = mid * (mid + 1) / 2;
   	 	int sum4 = sum2 - sum3;
   	 	//cout << sum3  << " " << sum4 << "\n";
   	 	if(sum4 < x) {
   	 		ans = (k - 1) - mid;
   	 		r = mid - 1;
   	 	}
   	 	else l = mid + 1;
   	 }
   	 cout << min(2 * k - 1, ans + 1 + k) << "\n";
   }
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