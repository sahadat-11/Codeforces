//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  int ans = 0, neg = 0, zero = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    ans += abs(abs(a[i]) - 1);
    if(a[i] < 0) neg++;
    if(a[i] == 0) zero++;
  }
  if(neg % 2 and !zero) ans += 2;// if zero contain 0 k one operation a negative kora jave; then neg even hobe;
  cout << ans << "\n";
  return 0;
}