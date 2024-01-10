//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int f[32];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      int row = s[1] - '0';
      char col = s[0];
      for(int i = 1; i <= 8; i++) {
         if(i == row) continue;
         cout << col << i << "\n";
      }
      for(char c = 'a'; c <= 'h'; c++) {
         if(c == col) continue;
         cout << c << row << "\n";
      }
   }
   return 0;
}