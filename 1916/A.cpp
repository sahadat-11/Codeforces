//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n, k; cin >> n >> k; int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     ll x = 1;
    for(int i = 0; i  <  n; i++) {
      x *= a[i];
    }
    if(2023 % x or x > 2023) cout << "NO";
    else {
      int y = 2023 / x;
      cout << "YES\n";
      cout << y << " ";
      for(int i = 1; i < k; i++) cout << 1 << " ";
    }
    cout << "\n";
   }
   return 0;
}
