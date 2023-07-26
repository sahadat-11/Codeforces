//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    ll x, y; cin >> x;
    ll sum = 0;
    for(int i = 1; i < n; i++) {
      cin >> y;
      if(x * y > 0) { // same sign
        x = max(x, y);
      }
      else { // different sign
        sum += x;
        x = y;
      }
      //cout << x << ' ' << y << endl;
      //cout << sum << endl;
    }
    sum += x; 
    cout << sum << '\n';
  }
  return 0;
}