//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n; cin >> n; ll a[n];
      ll sum1 = 0, sum2 = 0;
      for(ll i = 0; i < n; i++) {
         cin >> a[i];
         if(a[i] > 0) sum1 += a[i];
         else sum2 += (- a[i]);
      }
      cout << abs(sum1 - sum2) << "\n";
   }
    return 0;
}
