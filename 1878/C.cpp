//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k, x; cin >> n >> k >> x;
   int sum1 = n * (n  + 1) / 2;
   int xx = n - k;
   int sum2 = (xx) * (xx + 1) / 2;
   int sum3 = k * (k + 1) / 2;
   //cout << sum1 << " " << sum2 << endl;
   if(sum1 - sum2 >= x and x >= sum3) cout << "YES\n";
   else cout << "NO\n";
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

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 ll n, k, x; cin >> n >> k >> x;
   	 ll mnsum = k * (k + 1) / 2;
   	 ll mxsum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
   	 //cout << mnsum << " " << mxsum << "\n";
   	 if(x >= mnsum and x <= mxsum) cout << "YES\n";
   	 else cout << "NO\n";
   }
   return 0;
}