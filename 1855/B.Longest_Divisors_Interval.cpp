//https://codeforces.com/gym/104246
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n; cin >> n;
  int i = 1;
  while(n % i == 0) i++;
  cout << i - 1 << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      solve();
   }
   return 0;
}
