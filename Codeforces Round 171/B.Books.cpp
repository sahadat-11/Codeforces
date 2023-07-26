//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, t; cin >> n >> t; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int sum = 0, l = 0, res = 0;
  for(int r = 0; r < n; r++) {
    sum += a[r];
    while(sum > t) {
      sum -= a[l++];
    }
    res = max(res, r - l + 1);
  }
  cout << res << "\n";
  return 0; 
}
// approach 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, target;
  cin >> n >> target;
  vector < int > a(n);
  for (auto & x: a) {
    cin >> x;
  }
  int ans = 0;
  int l = 0, r = 0;
  int sum = a[l];
  while (r < n) {
    if (sum <= target) {
      ans = max(ans, r - l + 1);
      r++;
      sum += a[r];
    } else {
      sum -= a[l];
      l++;
    }
  }
  cout << ans << '\n';
}