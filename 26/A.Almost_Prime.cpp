//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 1; i <= n; i++) {
      int x = i; int c = 0;
      for(int j = 2; j * j <= x; j++) {
         if(x % j == 0) {
            c++;
            while(x % j == 0) {
               x /= j;
            }
         }
      }
      if(x > 1) c++;
      if(c == 2) cnt++;
   }
   cout << cnt << endl;
   return 0;
}

