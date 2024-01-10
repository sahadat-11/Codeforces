//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a, b; cin >> a >> b;
      cout << min(min(a, b), (a + b) / 4) << "\n";
   }
   return 0;
}
