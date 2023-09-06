//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, H, M; cin >> n >> H >> M;
  vector<pair<int,int>> v;
  int x = H * 60 + M;
  int mn = INT_MAX;
  for(int i = 0; i < n; i++) {
    int h, m; cin >> h >> m;
    int y = h * 60 + m;
    if(y >= x) {
     mn = min(mn, y - x);
    }
    else {
      mn = min(mn, y += (1440 - x));
    }
  }
  cout << mn / 60 << " " << mn % 60 << "\n";
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


// #include<bits/stdc++.h>

using namespace std;
int main() {
  int t, n, h, m; cin >> t;
  while (t--) {
    cin >> n >> h >> m;
    int s = h * 60 + m;
    int ans = 100000;
    while (n--) {
      cin >> h >> m;
      int p = h * 60 + m;
      if (p < s) p += (24 * 60);
      ans = min(ans, p - s);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
  }
}