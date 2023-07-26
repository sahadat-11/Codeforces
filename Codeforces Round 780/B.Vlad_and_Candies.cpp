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
     ll sum = 0;
     for(ll i = 0; i < n; i++) {
       cin >> a[i];
       sum += a[i];
     }
     sort(a, a + n);
     ll mx = 0, smx = 0;
     mx = a[n - 1];
     if(n > 1) smx = a[n - 2];
     //cout << mx << " " << smx << endl;
     bool flag = true;
     if(mx - smx >= 2) flag = false;
     //if(mx > (sum - mx)) flag = false;
     if(flag) cout << "YES\n";
     else cout << "NO\n";
   }
    return 0;
}