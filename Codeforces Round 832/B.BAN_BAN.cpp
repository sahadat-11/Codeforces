//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n; cin >> n; 
      ll l = 1, r = 3 * n;
      cout << (n + 1) / 2 << "\n"; // ceil value;
      while(l < r) {
         cout << l << " " << r << " ";
         l += 3; r -= 3;
      }
      cout << "\n";
   }
    return 0;
}
