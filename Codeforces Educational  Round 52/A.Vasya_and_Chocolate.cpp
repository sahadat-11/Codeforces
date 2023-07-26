//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
      ll s, a, b, c; cin >> s >> a >> b >> c;
      ll cnt = s / c;
      ll x = cnt / a;
      ll add = x * b;
      cout << cnt + add << "\n";
      
   }
    return 0;
}
