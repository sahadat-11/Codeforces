//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int fact = 1;
   for(int i = 1; i < n; i++) fact *= i;
   cout << fact / (n / 2) << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/VKXhlPIHHP6c
// https://prnt.sc/KZb4THSy0Hp8