//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
   int n; cin >> n; int a[n];
     unordered_map<int, int> mp;
     for(int i = 0; i < n; i++) {
       cin >> a[i]; mp[a[i]]++;
     }
    for(auto u : mp) {
      if(u.second >= 3) {
        cout << u.first << "\n"; return;
      }
    }
    cout << - 1 << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     solve();
   }
    return 0;
}
