// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve() {
//   ll n; cin >> n; ll a[n];
//   vector<ll> sum, mul;
//   for(ll i = 0; i < n; i++) cin >> a[i];
//   for(ll i = 0; i < n; i++) {
//     for(ll j = i + 1; j < n; j++) {
//       sum.push_back(a[i] + a[j]);
//       mul.push_back(a[i] * a[j]);
//     }
//   }
//   // for(auto u : sum) cout << u << " ";
//   // cout << "\n";
//   // for(auto u : mul) cout << u << " ";
//   // cout << "\n";
//   ll q; cin >> q;
//   while(q--) {
//     ll x, y; cin >> x >> y;
//     ll cnt = 0;
//     for(ll i = 0; i < sum.size(); i++) {
//       if(sum[i] == x and mul[i] == y) cnt++;
//     }
//     cout << cnt << " ";
//   }
//   cout << "\n";
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   ll t; cin >> t;
//   while(t--) {
//     solve();
//   } 
//   return 0;
// }
// // complexity O(n * n); brute force

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n; cin >> n; ll a[n];
  map<ll, ll> mp;
  for(ll i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  ll q; cin >> q;
  while(q--) {
    ll x, y; cin >> x >> y; // a+b = x, a*b = y;
    ll now = sqrtl(x * x - 4 * y); // a - b = now;
    ll a = (x + now) / 2;
    ll b = (x - now) / 2;
    if(a + b != x or a * b != y or !mp[a] or !mp[b]) {
      cout << 0 << " ";
    }
    else if(a == b) {
      cout << mp[a] * (mp[b] - 1) / 2 << " ";
    }
    else cout << 1ll * mp[a] * mp[b] << " ";
  }
  cout << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t; cin >> t;
  while(t--) {
    solve();
  } 
  return 0;
}
