//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   string a, b; cin >> a >> b;
   int n1 = a.size(), n2 = b.size();
   int j = 0, cnt = 0;
   for(int i = 0; i < n2; i++) {
    if(b[i] == a[j]) {
      cnt++; j++;
    }
   }
   cout << n1 + n2 - cnt << "\n";
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