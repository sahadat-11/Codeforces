//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int l, r, x, a, b; cin >> l >> r >> x >> a >> b;
    int ans = -1;
    if(a == b) ans = 0;
    else if(abs(a - b) >= x) ans = 1;
    else if(a < b) {
      if((b + x) <= r or (a - x) >= l) ans = 2;
      else if(a + x <= r and b - l >= x) ans = 3;
    }
    else {
      if(a + x <= r or b - x >= l) ans = 2;
      else if(a - x >= l and r - b >= x) ans = 3;
    }
    cout << ans << "\n";
  } 
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int l, r, x, a, b; cin >> l >> r >> x >> a >> b;
    if(a > b) swap(a, b); // b become large
    int ans = -1;
    if(a == b) ans = 0;
    else if(b - a >= x) ans = 1;
    else if((b + x) <= r or (a - x) >= l) ans = 2;
    else if(a + x <= r and b - l >= x) ans = 3;
    cout << ans << "\n";
  } 
  return 0;
}
// https://prnt.sc/sisiYLuUtdqX
