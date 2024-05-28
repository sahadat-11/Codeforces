//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
   	 ll a, b; cin >> a >> b;
   	 ll g = __gcd(a, b);
   	 //cout << g << "\n";
   	 ll n = b / g;
   	 ll res = n;
     for(ll i = 2; i * i <= n; i++) {
    	if(n % i == 0) {
    		while(n % i == 0) {
    			n /= i;
    		}
    		res -= res / i;
    	 }
     }
     if(n > 1) {
    	res -= res / n;
     }
     cout << res << endl;
   }
   return 0;
}