//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int dx[] = {0, 0, -1, +1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, +1, +1, -1, -1};
int n, m;
bool isValid(int x, int y) {
  return x >= 0 and x < n and y >= 0 and y < m;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  int x, y; cin >> x >> y;
  x--; y--;
  bool flag = true;
  for(int k = 0; k < 8; k++) {
    int nxt_x = x + dx[k];
    int nxt_y = y + dy[k];
    //cout << nxt_x << " " << nxt_y << endl;
    if(isValid(nxt_x, nxt_y)) {
      if(s[nxt_x][nxt_y] != 'x') flag = false;
    }
  }
  //cout << cnt << "\n";
  if(flag) cout << "yes\n";
  else cout << "no\n";
  return 0;
}