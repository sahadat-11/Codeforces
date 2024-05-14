//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.rbegin(), v.rend());
   int sum1 = 0, sum2 = 0;
   for(int i = 0; i < n; i++) {
   	if(i % 2 == 0 and v[i] % 2 == 0) sum1 += v[i];
   	else if(i % 2 == 1 and v[i] % 2 == 1) sum2 += v[i];
   }
   if(sum1 == sum2) cout << "Tie\n";
   else if(sum1 > sum2) cout << "Alice\n";
   else cout << "Bob\n";
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