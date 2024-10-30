//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e3 + 7;
int pre_sum[N][N];
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n, q; cin >> n >> q;
     for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        pre_sum[x][y] += x * y;
     }
     for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= 1000; j++) {
            pre_sum[i][j] += pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];
        }
     }
     while(q--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int ans = pre_sum[x2 - 1][y2 - 1] - pre_sum[x1][y2 - 1] - pre_sum[x2 - 1][y1] + pre_sum[x1][y1];
        cout << ans << '\n'; 
     }
     for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= 1000; j++) {
            pre_sum[i][j] = 0;
        }
     }
   }
   return 0;
}

