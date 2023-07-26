//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll t; cin >> t;
  while(t--) {
    ll n; cin >> n; ll a[n];

    for(ll i = 0; i < n; i++) cin >> a[i];
    ll cnt = 0;
    for(ll i = 1; i < n - 1; i++) {
      if(a[i] > a[i - 1] and a[i] > a[i + 1]) {
        a[i + 1] = max(a[i], a[i + 2]);
        cnt++;
      }
    }

    cout << cnt << "\n";
    for(ll i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
  }

  return 0;
}
