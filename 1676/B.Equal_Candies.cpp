//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mn = *min_element(a, a + n);
  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += (a[i] - mn);
  }
  cout << ans << "\n";
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