//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   sort(v.begin(), v.end());
   n = unique(v.begin(), v.end()) - v.begin();
   //cout << n << "\n";
   int pos = n;
   for(int i = 0; i < n; i++) {
    if(v[i] != (i + 1)) {
      pos = i + 1; break;
    }
   }
   //cout << pos << "\n";
   if(pos & 1) cout << "Alice\n";
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