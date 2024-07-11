//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  vector<int> a(n);
  deque<int> dq;
  vector<pair<int, int>> p;
  int mx = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    dq.push_back(a[i]);
    mx = max(mx, a[i]);
  }
  int mxi = 0;
  while(true) {
    int x = dq.front();
    dq.pop_front();
    int y = dq.front();
    dq.pop_front();
    if(x == mx) {
        dq.push_front(y);
        dq.push_front(x);
        break;
    }
    if(x > y) {
        dq.push_front(x);
        dq.push_back(y);
    }
    else {
        dq.push_front(y);
        dq.push_back(x);
    }
    p.push_back({x, y});
    mxi++;
  }
  // deque to array;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    v[i] = dq.front();
    dq.pop_front();
  }
  while(q--) {
    int x; cin >> x;
    if(x <= mxi) {
        cout << p[x - 1].first << " " << p[x - 1].second << "\n";
    }
    else {
        cout << mx << " " << v[(x - (mxi + 1)) % (n - 1) + 1] << '\n';
    }
  }
  return 0;
}
