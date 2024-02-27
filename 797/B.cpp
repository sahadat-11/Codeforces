//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.rbegin(), v.rend());
   int sum = 0, min_pos_odd = INT_MAX, max_neg_odd = INT_MIN;
   for(int i = 0; i < n; i++) {
   	 if(v[i] >= 0) sum += v[i];
   	 if(v[i] % 2) {
   	 	if(v[i] > 0) min_pos_odd = min(min_pos_odd, v[i]);
   	 	else max_neg_odd = max(max_neg_odd, v[i]);
   	 }
   }
   if(sum % 2) cout << sum << "\n";
   else {
   	ll x = sum - min_pos_odd;
   	ll y = sum - abs(max_neg_odd);
   	cout << max(x, y);
   }
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