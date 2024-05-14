//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int nn = n;
   map<int, int> mp;
   for(int i = 2; i * i <= n; i++) {
   	if(n % i == 0) {
   	  int cnt = 0;
   	  while(n % i == 0) {
   	  	cnt++;
   	  	n /= i;
   	  }
   	  mp[i] = cnt;
   	}
   }
   if(n > 1) {
   	mp[n] = 1;
   }
   int mx = 0, mxprime;
   for(auto [p, fre] : mp) {
   	if(fre > mx) {
   	  mx = fre;
   	  mxprime = p;
   	}
   }
   int x = 1;
   for(int i = 1; i < mx; i++) {
   	x = x * mxprime;
   }
   cout << mx << "\n";
   for(int i = 1; i < mx; i++) {
   	cout << mxprime << " ";
   }
   cout << nn / x << "\n";

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