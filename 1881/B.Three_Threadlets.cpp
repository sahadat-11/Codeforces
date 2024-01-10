//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a[3];
      for(int i = 0; i < 3; i++) cin >> a[i];
      sort(a, a + 3);
      int cnt = 0;
      if(a[1] % a[0] == 0) {
         cnt += (a[1] / a[0] - 1);
      }
      if(a[2] % a[0] == 0) {
         cnt += (a[2] / a[0] - 1);
      }
      if(a[1] % a[0] != 0 or a[2] % a[0] != 0 or cnt > 3) {
         cout << "NO\n";
      }
      else {
         cout << "YES\n";
      }
   }
   return 0;
}