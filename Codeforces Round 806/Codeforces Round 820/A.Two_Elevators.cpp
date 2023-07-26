//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a, b, c; cin >> a >> b >> c;
      int d1 = a - 1;
      int d2 = abs(b - c) + abs(c -1);
      if(d1 < d2) cout << "1\n";
      else if(d1 > d2) cout << "2\n";
      else cout << "3\n"; // d1 = d2;
    }
    return 0;
}
