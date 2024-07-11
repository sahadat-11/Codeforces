//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, c; cin >> a >> b >> c;
  int cnt = 0;
  for(int i = 1; i * i <= c; i++) {
    if(c % i == 0) {
       if(i >= a and i <= b) cnt++;
       if(i != (c / i)) {
        if((c / i) >= a and (c / i) <= b) cnt++;
       }
    }
  }
  cout << cnt << "\n";
  return 0;
}