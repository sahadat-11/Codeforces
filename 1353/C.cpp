//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int sum = 0;
   for(int i = 1; i <= n / 2; i++) {
   	int x = i - 1, y = n - i;
   	int sum1 = x * (x + 1) / 2;
   	int sum2 = y * (y + 1) / 2;
   	sum += (sum1 * 2) + (sum2 * 2);
   }
   int x = n / 2;
   cout << sum + 2 * (x * (x + 1) / 2) << "\n";
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