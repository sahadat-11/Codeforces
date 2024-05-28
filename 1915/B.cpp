//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s[3];
      for(int i = 0; i < 3; i++) {
         cin >> s[i];
      }
      for(int i = 0; i < 3; i++) {
         int a = 0, b = 0, c = 0;
         for(int j = 0; j < 3; j++) {
            if(s[i][j]== 'A') a++;
            if(s[i][j]== 'B') b++;
            if(s[i][j]== 'C') c++;
         }
         if(a == 0) cout << "A\n";
         if(b == 0) cout << "B\n";
         if(c == 0) cout << "C\n";
      }
   } 
   return 0;
}
