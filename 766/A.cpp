//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string a, b; cin >> a >> b;
   if(a == b) {
   	 cout << -1 << "\n";
   }
   else {
   	 cout << max(a.size(), b.size());
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

// if(a == b) one string every subsequce is occur in another string
// else max ta nibo because max string ta 100% small string er subsequence hobe na