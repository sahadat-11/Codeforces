//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, a, b; cin >> n >> a >> b;
   int sum = 0;
   int x = b - a;
   if(x > 0) {
    if(x >= n) {
    	int sum1 = x * (x + 1) / 2;
   	    int sum2 = b * (b + 1) / 2;
   	    sum += (sum2 - sum1);
   	    n = 0;
    }
    else {
    	int sum1 = a * (a + 1) / 2;
	   	int sum2 = b * (b + 1) /  ;
	   	sum += (sum2 - sum1);
	   	n -= x;
	   	//cout << sum <<" " << n << "\n";
    }	
   }
   cout << sum + (n * a) << "\n";
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