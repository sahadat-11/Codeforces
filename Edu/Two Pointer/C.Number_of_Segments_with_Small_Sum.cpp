//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, x; cin >> n >> x; ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  ll l = 0;
  ll sum = 0, ans = 0;
  for(ll r = 0; r < n; r++) {
     sum += a[r];
     while(sum > x) {
       sum -= a[l];
       l++;
     }
     ans += (r - l + 1);
  }
  cout << ans << endl;
  return 0;
}