//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     int n; cin >> n;
     int ans = n & (-n);
     if(ans == n) ans++;
     if(n == 1) ans = 3;
     cout << ans << "\n";
  }
  return 0;
}
//https://prnt.sc/2nM8gcKVK7mu
//https://discuss.codechef.com/t/lowbit-function/56472/6