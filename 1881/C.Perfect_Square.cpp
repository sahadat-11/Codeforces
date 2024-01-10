//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; string s[n];
     for(int i = 0; i < n; i++) cin >> s[i];
     int ans = 0;
     for(int i = 0; i < n / 2; i++) {
       for(int j = 0; j < n / 2; j++) {
         int a = s[i][j], b = s[n - j - 1][i];
         int c = s[n - i - 1][n - j - 1], d = s[j][n - i - 1];
         ans += 4 * max({a, b, c, d}) - a - b - c - d;
       }
     }
     cout << ans << "\n";
   }
   return 0;
}
// https://www.youtube.com/watch?v=Oj8mBcWQIeM