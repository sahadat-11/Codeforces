//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      if(n % 2) {
         cout << 2 << " " << n - 1 << "\n";
      }
      else cout << 2 << " " << n << "\n";
   }
   return 0;
}
