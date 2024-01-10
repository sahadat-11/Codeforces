//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 0; i < n; i++) cin >> a[i];
   int one = 0, zero = 0;
   for(int i = 0; i < n; i++) {
   	 if(a[i] == 0) zero++;
   	 if(a[i] == 1) one++;
   }
   cout << 1ll * one * (1ll << zero) << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/pbcAOqah_rvZ