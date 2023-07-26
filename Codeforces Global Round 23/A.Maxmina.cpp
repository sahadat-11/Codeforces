//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
      ll n, k; cin >> n >> k; ll a[n];
      for(ll i = 0; i < n; i++) cin >> a[i];
      bool flag = false;
      for(ll i = 0; i < n; i++) {
         if(a[i] == 1) flag = true;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
   }
    return 0;
}
