//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; string s; cin >> n >> s;
      for(int i = 0, j = n - 1; i <= j; i++, j--) {
         if((s[i] == '0' and s[j] == '1') or (s[i] == '1' and s[j] == '0')) {
            n -= 2;
         }
         else break;
      }
      cout << n << "\n";
   }
    return 0;
}