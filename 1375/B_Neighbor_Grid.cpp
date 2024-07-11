//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
#define int long long
int ans[N][N];
int n, m; 

int dx[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dy[] = {+1, 0, -1, 0, +1, -1, -1, +1};

bool is_valid(int i, int j) {
  return i >= 0 and i < n and j >= 0 and j < m;
}

void solve() {
   cin >> n >> m; int a[n][m];
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        cin >> a[i][j];
    }
   }
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        int cnt = 0;
        for(int k = 0; k < 4; k++) {
            int nxt_x = i + dx[k];
            int nxt_y = j + dy[k];
            if(is_valid(nxt_x, nxt_y)) {
              cnt++;
            }
         }
         if(cnt < a[i][j]) {
            cout << "NO\n"; return;
         }
         ans[i][j] = cnt;
       }
    }
    cout << "YES\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
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
