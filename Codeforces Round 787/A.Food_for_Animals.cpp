//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
   int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
   int exd = 0, exc = 0;
   if(x > a) exd = x - a;
   if(y > b) exc = y - b;
   if(exd + exc <= c) return true;
   return false;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     if(solve()) cout << "YES\n";
     else cout << "NO\n";
   }
    return 0;
}
