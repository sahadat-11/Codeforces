//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;
vector<ll> divs;
int main() {
  int t; cin >> t;
  while(t--) {
  int n, k; cin >> n >> k;
  vector<int> divs;
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      divs.push_back(i);
      if(i != n / i) divs.push_back(n / i);
    } 
  }
  sort(divs.begin(), divs.end());
 //for(auto u: divs) cout << u <<" ";
  int x = INT_MAX;
  for(int i = 0; i < divs.size(); i++) {
    if(divs[i] <= k) {
      x = divs[i];
    }
  }
  //cout << x << endl;
  if(n < k) cout << 1 << "\n";
  else cout << n / x << "\n";
 }
  return 0;
}

// approach 2:
#include <iostream>
using namespace std;
#define ll long long int
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    ll ans = n;
    for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        if (i <= k) {
          ans = min(ans, n / i);
        }
        if (n / i <= k) {
          ans = min(ans, i);
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}