//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, sum = 0, ans = n + 1;
  for(int r = 0; r < n; r++) {
    sum += a[r];
    if(sum >= x) {
      while(sum >= x) {
        ans = min(ans, r - l + 1);
        sum -= a[l];
        l++;
      }
    }
    //cout << ans << "\n";
  }
  if(ans == n + 1) ans = -1;
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, x; cin >> n >> x; ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  ll sum = 0, l = 0, mn = INT_MAX;
  for(int r = 0; r < n; r++) {
    sum += a[r];
    while(sum - a[l] >= x) {
       sum -= a[l];
       l++;
    }
    if(sum >= x) {
      mn = min(mn, r - l + 1);
    }
  }
  if(mn == INT_MAX) cout << -1 << "\n";
  else cout << mn << endl;
  return 0;
}