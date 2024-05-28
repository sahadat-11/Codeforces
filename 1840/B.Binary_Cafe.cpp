//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     ll n, k; cin >> n >> k;
     if(k > 32) {
       cout << n + 1 << "\n";
     }
     else {
       ll x = (1LL << k);
       cout << min(x, n + 1) << "\n";
     }
  }
  return 0;
}
//https://prnt.sc/wgj5Jk5I5VH6
//https://prnt.sc/Ro5pvAU-a_jt