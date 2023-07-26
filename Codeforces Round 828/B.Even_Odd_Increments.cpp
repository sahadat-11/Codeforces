//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n, q; cin >> n >> q; ll a[n];
      ll sum = 0, evnc = 0, oddc = 0;
      for(ll i = 0; i < n; i++) {
         cin >> a[i];
         sum += a[i];
         if(a[i] & 1) oddc++;
         else evnc++;
      }
      while(q--) {
      ll x, value; cin >> x >> value;

      if(x == 0) {
         if(value % 2 == 0) {
            sum += (evnc * value);
         }
         else {
            sum += (evnc * value);
            oddc += evnc;
            evnc = 0;
         }
      }
      else{ // x = 1
         if(value % 2 == 0) {
            sum += (oddc * value);
         }
         else {
            sum += (oddc * value);
            evnc += oddc;
            oddc = 0;
         }
      }
      cout << sum << "\n";
     }
   }
    return 0;
}
