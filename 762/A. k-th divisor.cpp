//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n, k; cin >> n >> k;
   vector<ll> divs;
   for(ll i = 1; i * i <= n; i++) {
      if(n % i == 0) {
         divs.push_back(i);
         if(i != n / i) divs.push_back(n / i);
      }
   }
   sort(divs.begin(), divs.end());
   if(divs.size() < k) cout << - 1 << "\n";
   else cout << divs[k - 1] << "\n";
   return 0;
}