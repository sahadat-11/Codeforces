//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   int ans;
   if(n == 1) ans = 0;
   else if(n == 2) ans = 1;
   else if(n == 3) ans = 2;
   else if(n % 2 == 0) ans = 2;
   else ans = 3;
   cout << ans << "\n";
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

// if(n is odd subtract 1, then n is even);odd >= even >= 2 >= 1;