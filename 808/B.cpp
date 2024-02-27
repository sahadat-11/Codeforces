//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define ll long long
ll pre[N];
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   for(int i = 1; i <= n; i++) {
   	pre[i] = pre[i - 1] + v[i];
   }
   ll sum = 0;
   for(int i = k; i <= n; i++) {
   	sum += pre[i] - pre[i - k];
   }
   //cout << sum << "\n";
   cout << fixed << setprecision(10) << 1.0 * sum / (n - k + 1);
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}