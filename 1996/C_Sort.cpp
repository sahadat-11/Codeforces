//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
int pre1[N][26], pre2[N][26];
void solve() {
   int n, q; cin >> n >> q;
   string a, b; cin >> a >> b;
   a = '$' + a;
   b = '$' + b;
   for(int i = 1; i <= n; i++) {
    for(int j = 0; j < 26; j++) {
        if(j == (a[i] - 'a')) {
            pre1[i][j] = pre1[i - 1][j] + 1;
        }
        else {
            pre1[i][j] = pre1[i - 1][j];
        }
    }
   }
   for(int i = 1; i <= n; i++) {
    for(int j = 0; j < 26; j++) {
        if(j == (b[i] - 'a')) {
            pre2[i][j] = pre2[i - 1][j] + 1;
        }
        else {
            pre2[i][j] = pre2[i - 1][j];
        }
    }
   }
   while(q--) {
    int l, r; cin >> l >> r;
    int rem = 0, ans = 0;
    for(int i = 0; i < 26; i++) {
      int fre1 = pre1[r][i] - pre1[l - 1][i];
      int fre2 = pre2[r][i] - pre2[l - 1][i];
      if(fre1 >= fre2) {
        ans += (fre1 - fre2);
      }
    }
    cout << ans << "\n";
   }
   for(int i = 0; i <= n; i++) {
    for(int j = 0; j < 26; j++) {
        pre1[i][j] = 0;
        pre2[i][j] = 0;
    }
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}