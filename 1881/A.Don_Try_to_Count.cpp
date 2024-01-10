//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, m; cin >> n >> m;
      string a, b; cin >> a >> b;
      int cnt = 0;
      bool flag = false;
      while(cnt <= 5) {
         if(a.find(b) != -1) {
           flag = true;
           break; 
         }
         cnt++;
         a += a;
      }
      if(flag) {
         cout << cnt << "\n";
      }
      else {
         cout << "-1\n";
      }
   }
   return 0;
}