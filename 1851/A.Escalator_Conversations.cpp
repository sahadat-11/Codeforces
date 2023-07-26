//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, m, k, h; cin >> n >> m >> k >> h; int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
      int x = abs(a[i] - h);
      if(x % k == 0 and x / k > 0 and x / k < m) cnt++;
    }
    cout << cnt << "\n";
  }
  return 0;
}
