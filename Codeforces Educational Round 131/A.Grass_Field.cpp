//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a, b, c, d; cin >> a >> b >> c >> d;
      if(a == 0 and b == 0 and c == 0 and d == 0) cout << "0\n";
      else if(a == 1 and b == 1 and c == 1 and d == 1) cout << "2\n";
      else cout << "1\n";
    }
    return 0;
}
