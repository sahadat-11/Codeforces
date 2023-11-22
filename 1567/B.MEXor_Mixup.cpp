 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   int a, b; cin >> a >> b;
   int p;
   int h = a - 1;// 1 to a - 1 xor;
   int mod = h % 4;
   if(mod == 0) p = h;
   else if(mod == 1) p = 1;
   else if(mod == 2) p = h + 1;
   else p = 0;
   if(p == b) {
      cout << a << "\n";
   }
   else if((p ^ a) == b) {
      cout << a + 2 << "\n";
   } 
   else cout << a + 1 << "\n";
   }
   return 0;
}
//https://prnt.sc/e3xKk25ZeyqM