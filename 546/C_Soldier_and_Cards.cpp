//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  deque<int> dq1, dq2;
  int k1; cin >> k1;
  while(k1--) {
    int x; cin >> x;
    dq1.push_back(x);
  }
  int k2; cin >> k2;
  while(k2--) {
    int x; cin >> x;
    dq2.push_back(x);
  }
  int cnt = 0;
  while(dq1.size() and dq2.size()) {
    int x = dq1.front();
    int y = dq2.front();
    if(x < y) {
      dq1.pop_front();
      dq2.pop_front();
      dq2.push_back(x);
      dq2.push_back(y);
    }
    else {
      dq2.pop_front();
      dq1.pop_front();
      dq1.push_back(y);
      dq1.push_back(x);
    }
    cnt++;
    if(cnt >= 100000) break;
  }
  if(cnt < 100000) {
    if(dq1.size()) {
        cout << cnt << " " << 1 << "\n";
    }
    if(dq2.size()) {
        cout << cnt << " " << 2 << "\n";
    }
  }
  else {
    cout << "-1\n";
  }
  return 0;
}