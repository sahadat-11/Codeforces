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
      for(ll i = 0; i < n; i++) cin >> a[i];
      string s; cin >> s;
      bool flag = false;
      for(ll i = 0; i < n; i++) {
         for(ll j = i + 1; j < n; j++) {
            if(a[i] == a[j] and s[i] != s[j]) flag = true;
         }
      }
      if(flag) cout << "NO\n";
      else cout << "YES\n";
   }
    return 0;
}
