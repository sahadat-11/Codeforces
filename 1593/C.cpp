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
      int mx = max(a, max(b, c));
      int cnt = 0;
      if(a == mx) cnt++;
      if(b == mx) cnt++;
      if(c == mx) cnt++;
      if(a == mx and mx != 0) {
         if(cnt == 1) cout << 0 << " ";
         else cout << 1 << " ";
      }
      else {
         cout << mx + 1 - a << " ";
      }
      if(b == mx and mx != 0) {
         if(cnt == 1) cout << 0 << " ";
         else cout << 1 << " ";
      }
      else {
         cout << mx + 1 - b << " ";
      }
      if(c == mx and mx != 0) {
        if(cnt == 1) cout << 0 << " ";
        else cout << 1 << " ";
      }
      else {
         cout << mx + 1 - c << " ";
      }
      cout << "\n";
   } 
   return 0;
}
