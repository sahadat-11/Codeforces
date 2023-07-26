//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
     ll s, n; cin >> s >> n; ll a[n], b[n];
     vector<pair<ll,ll>> v;
     for(ll i = 0; i < n; i++) {
      cin >> a[i] >> b[i];
      v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end());
     bool flag = true;
     for(ll i = 0; i < n; i++) {
       if(s <= v[i].first) flag = false;
       else s += v[i].second;
     }
     if(flag) cout << "YES\n";
     else cout << "NO\n";
   return 0;
}
