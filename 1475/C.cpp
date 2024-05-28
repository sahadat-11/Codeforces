//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int x, y, k; cin >> x >> y >> k; int a[k], b[k];
     map<int, int> mp1, mp2;
     for(int i = 0; i < k; i++) cin >> a[i];
     for(int i = 0; i < k; i++) cin >> b[i];
     for(int i = 0; i < k; i++) {
       mp1[a[i]]++;
     }
     for(int i = 0; i < k; i++) {
       mp2[b[i]]++;
     }
     ll ans = 0;
     for(int i = 0; i < k; i++) {
       int x = mp1[a[i]], y = mp2[b[i]];
       ans += k - x - y + 1;
     }
     cout << ans / 2 << "\n";
   }
   return 0;
}