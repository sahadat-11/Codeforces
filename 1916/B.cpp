//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll a, b; cin >> a >> b;
      ll lcm = a / (__gcd(a, b)) * b;
      if(lcm == b) cout << lcm * b / a << endl;
      else cout << lcm << endl;
   }
   return 0;
}
