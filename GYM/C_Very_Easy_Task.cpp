//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x, y; cin >> n >> x >> y;
  int l = 0, h = 1e9, ans = 0;
  while(l <= h) {
    int mid = l + (h - l) / 2;
    int cnt = 0;
    cnt += mid / x; 
    cnt += mid / y;
    if(cnt >= n) {
      ans = mid;
      h = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  cout << ans << "\n";
  return 0;
}