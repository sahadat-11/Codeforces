//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll inversion(int a[], int n) {
  ll one = 0, ans = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 0) {
      ans += one;
    }
    else one++;
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll ans = inversion(a, n);
    int ind = -1;
    for(int i = 0; i < n; i++) {// first 0 filp in 1;
      if(a[i] == 0) {
        a[i] = 1;
        ind = i;
        break;
      }
    }
    ans = max(ans, inversion(a, n));
    if(ind != -1) a[ind] = 0; // if found 0 reassign 0 in this index;
    for(int i = n - 1; i >= 0; i--) { // first 0 filp in 1;
      if(a[i] == 1) {
        a[i] = 0;
        ind = i;
        break;
      }
    }
    ans = max(ans, inversion(a, n));
    cout << ans << "\n";
  }
  return 0;
}