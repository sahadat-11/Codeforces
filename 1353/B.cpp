//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v1(n), v2(n);
   for(int i = 0; i < n; i++) cin >> v1[i];
   for(int i = 0; i < n; i++) cin >> v2[i];
   sort(v1.begin(), v1.end());
   sort(v2.rbegin(), v2.rend());
   for(int i = 0; i < n; i++) {
     if(v2[i] > v1[i] and k > 0) {
     	swap(v1[i], v2[i]);
     	k--;
     }
   }
   int sum = 0;
   for(int i = 0; i < n; i++) {
    sum += v1[i]; 
   }
   cout << sum << "\n";
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