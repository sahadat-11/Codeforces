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
    while(sum >= x) {
      //cout << sum << endl;
      mn = min(mn, r - l + 1);
      sum -= a[l];
      l++;
      //cout << mn << endl;
    }
  }

  if(mn == INT_MAX) cout << -1 << "\n";
  else cout << mn << endl;
  return 0;
}