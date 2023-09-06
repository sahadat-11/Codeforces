//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
bool isprime(ll n) {
  if(n <= 1) return false;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     ll n; cin >> n;
     ll x = sqrtl(n);
     if(isprime(x) and (x * x == n)) cout << "YES\n";
     else cout << "NO\n";
   }
   return 0;
}

