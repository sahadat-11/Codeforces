//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, c; cin >> a >> b >> c;
  int n; cin >> n;
  vector<int> u, p;
  for(int i = 0; i < n; i++) {
    int x; string s; cin >> x >> s;
    if(s[0] == 'U') {
        u.push_back(x);
    }
    else {
        p.push_back(x);
    }
  }
  //for(auto u : p) cout << u << "\n";
  sort(u.begin(), u.end());
  sort(p.begin(), p.end());
  int sum = 0, cnt1 = u.size(), cnt2 = p.size(), c1 = 0, c2 = 0;
  int cnt = 0;
  
  while(a > 0 and c1 < cnt1) {
    sum += u[c1];
    c1++; a--;
    cnt++;
  }
  //cout << sum << "\n";
  while(b > 0 and c2 < cnt2) {
    sum += p[c2];
    c2++; b--;
    cnt++;
  }
  //cout << sum << "\n";

  while(c > 0 and (c1 < cnt1 or c2 < cnt2)) {
    if(c1 < cnt1 and c2 < cnt2) {
        int mn = min(u[c1], p[c2]);
        if(mn == u[c1]) {
            sum += mn;
            c1++; c--;
            cnt++;
        }
        else {
            sum += mn;
            c2++; c--;
            cnt++;
        }
    }
    else if(c1 < cnt1) {
      sum += u[c1];
      c1++; c--;
      cnt++;
    }
    else if(c2 < cnt2) {
      sum += p[c2];
      c2++; c--;
      cnt++;
    }
  }
  
  cout << cnt << " " << sum << "\n";
  return 0;
}