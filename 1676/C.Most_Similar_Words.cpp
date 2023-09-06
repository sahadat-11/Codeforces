//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, m; cin >> n >> m; string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  int ans = INT_MAX;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
     if(i != j) {
     string a = s[i], b = s[j];
     int mn = 0;
     for(int k = 0; k < m; k++) {
      mn+= abs(a[k] - b[k]);
     }
     ans = min(ans, mn);
    }  
   }
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