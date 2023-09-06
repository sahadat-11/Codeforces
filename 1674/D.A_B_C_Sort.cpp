//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  if(n % 2 == 0) {
     for(int i = 1; i <= n; i += 2) {
       if(a[i] > a[i + 1]) swap(a[i], a[i + 1]);
     }
  }
  else {
     for(int i = 2; i <= n; i += 2) {
       if(a[i] > a[i + 1]) swap(a[i], a[i + 1]);
     }
  }
  if(is_sorted(a + 1, a + n + 1)) cout << "YES\n";
  else cout << "NO\n";
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
// https://prnt.sc/DhckT2JEdkoF