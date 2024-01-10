//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
bool flag[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int state = 0, ans = 0;
   while(n--) {
      char c; cin >> c;
      if(c == '+') {
         int x; cin >> x;
         flag[x] = true;
         state++;
         ans = max(ans, state);
      }
      else {
         int x; cin >> x;
         if(flag[x]) {
            state--;
            ans = max(ans, state);
            flag[x] = false;
         } 
         else {
            flag[x] = false;
            ans++;
         }
      }
   }
   cout << ans << "\n";
   return 0;
}

// https://prnt.sc/whVbXGvBGbGX
// https://prnt.sc/Eu33JWOdYT-H