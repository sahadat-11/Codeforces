//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, x; cin >> n >> x; ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  ll sum = 0, l = 0, ans = 0;
  for(int r = 0; r < n; r++) {
    sum += a[r];
    while(sum - a[l] >= x) {
       sum -= a[l];
       l++;
    }
    if(sum >= x) {
      ans += l + 1;// 1+ for 0 indexing
    }
  }
  cout << ans << "\n";
  return 0;
}