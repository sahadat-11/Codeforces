//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m; cin >> n >> m; int a[m];
  for(int i = 0; i < m; i++) cin >> a[i];
  sort(a, a + m);
  int ans = INT_MAX;
  for(int i = 0; i <= m - n; i++) {
    int dif = a[i + n - 1] - a[i];
    //cout << dif << "\n";
    ans = min(ans, dif);
  }
  cout << ans << "\n";
  return 0;
}
