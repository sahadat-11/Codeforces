//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
ll lcm(ll a, ll b) {
   return a / (__gcd(a, b)) * b;
}
int main() {
  sahadat();
   ll n;cin>>n;
   ll a = 1e13, b = 1e13;
   for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
       if(lcm(i, n / i) == n) {
          if(max(i, n / i) < max(a, b)) {
             a = i, b = n / i;
          }
       }
     }
   }
   cout << a << " " << b << "\n";
   

  return 0;

}

// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main() {
  sahadat();
   ll n;cin>>n;
   ll a = 1e13, b = 1e13;
   for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
       if(__gcd(i, n / i) == 1) {
          if(max(i, n / i) < max(a, b)) {
             a = i, b = n / i;
          }
       }
     }
   }
   cout << a << " " << b << "\n";
   

  return 0;

}

