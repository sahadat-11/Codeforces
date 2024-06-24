//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int n, m; 
int dx[] = {0, 0, -1, +1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, +1, +1, -1, -1};

bool isValid(int x, int y) {
  return x >= 0 and x < n and y >= 0 and y < m;
}


void solve() {
   cin >> n >> m;
   int a[n + 1][m + 1];
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
      cin >> a[i][j];
   	}
   }
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
   		int mx = 0;
   		for(int k = 0; k < 4; k++) {
		    int nxt_x = i + dx[k];
		    int nxt_y = j + dy[k];
		    if(isValid(nxt_x, nxt_y)) {
		      mx = max(mx, a[nxt_x][nxt_y]);
		    }
		}
		if(a[i][j] > mx) {
			a[i][j] = mx;
		}

	  }
   }
   for(int i = 0; i < n; i++) {
   	for(int j = 0; j < m; j++) {
      cout << a[i][j] << " ";
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