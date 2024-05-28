//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 7;
bitset<N>f; // initially false;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   int t, cs = 0; cin >> t;
   while(t--) {
      cout << "Case " << ++cs << ": ";
      int n; cin >> n;
      int ways = 0;
      if(n == 4) ways = 1;
      for(int i = 3; i <= n / 2; i += 2) {
         if(!f[i] and !f[n - i]) ways++;
      }
      cout << ways << "\n";
   }
   return 0;
}