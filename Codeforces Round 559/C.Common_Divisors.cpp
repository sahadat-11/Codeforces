//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n; ll a[n];
   for(ll i = 0; i < n; i++) cin >> a[i];
   ll x = a[0]; 
   for(ll i = 1; i < n; i++) {
     x = __gcd(x, a[i]);
   }
   //cout << x << endl; // x = gcd
   ll cnt = 0;
   for(ll i = 1; i * i <= x; i++) {
     if(x % i == 0) {
       cnt++;
       if(i != x / i) cnt++;
     }
   }
   cout << cnt << "\n";
   return 0; 
}


// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n; ll a[n];
   for(ll i = 0; i < n; i++) cin >> a[i];
   ll x = 0; 
   for(ll i = 0; i < n; i++) {
     x = __gcd(x, a[i]);
   }
   //cout << x << endl; // x = gcd
   ll count_of_divisor = 1;
   for(ll p = 2; p * p <= x; p++) {
     if(x % p == 0) {
       ll power_of_p = 0;
       while(x % p == 0) {
         power_of_p++;
         x /= p;
       }
      count_of_divisor *= (power_of_p + 1);
     }
   }
   if(x > 1) {
   ll power_of_p = 1;
   count_of_divisor *= (power_of_p + 1);
  }
   cout << count_of_divisor << "\n";
   return 0; 
}
