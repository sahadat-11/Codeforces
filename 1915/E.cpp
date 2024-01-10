//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      map<ll, ll> mp;
      mp[0] = 1;
      bool flag = false;
      ll sum = 0;
      for(int i = 0; i < n; i++) {
         if(i % 2 == 0) sum += a[i];
         else sum -= a[i];
         if(mp[sum] >= 1) {
            flag = true;
         }
         mp[sum]++;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
   } 
   return 0;
}
