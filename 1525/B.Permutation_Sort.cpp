//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans;
   if(is_sorted(a, a + n)) ans = 0;
   else if(a[0] == 1 or a[n - 1] == n) ans = 1;
   else if (a[0] == n and a[n - 1] == 1) ans = 3;
   else ans = 2;
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