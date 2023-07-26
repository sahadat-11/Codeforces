//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--) {
      int m; cin >> m;
      map<int, int> mp;
      for(int i = 1; i <= m; i++) {
        int n; cin >> n; int a[n];
        for(int j = 0; j < n; j++) {
          cin >> a[j];
          mp[a[j]] = i;
        }
      }
      // for(auto u : mp) {
      //   cout << u.first << " " << u.second << "\n";
      // }
      map<int, int> ans;
      for(auto u : mp) {
        ans[u.second] = u.first;
      }
      // for(auto u : ans) {
      //   cout << u.first << " " << u.second << "\n";
      // }
      if(ans.size() != m) cout << "-1\n";
      else {
        for(auto u : ans) cout << u.second << " "; cout << "\n";
      }
    }
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
     ll t; cin >> t;
     while(t--) {
         ll m; cin >> m;
         map<ll,ll>mp,ans;
         for(ll i = 1; i <= m; i++) {
            ll n; cin >> n; 
            while(n--) {
                ll x; cin >> x;
                mp[x] = i;
            }
         }
         for(auto u : mp) ans[u.second] = u.first;//second value k first value te convert;
           
         if(ans.size() == m) {
            for(auto u : ans ) cout << u.second <<" "; cout << endl;
         }
        else cout <<-1 <<endl;
         
     }
    return 0;

 }