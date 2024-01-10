//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int f[32];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; string s; cin >> n >> s;
   int total_L = count(s.begin(), s.end(), 'L');
   int total_O = count(s.begin(), s.end(), 'O');
   bool flag = false;
   int ans = -1;
   int left_O = 0, left_L = 0, right_L = 0, right_O = 0;
   for(int i = 0; i < n - 1; i++) {
      if(s[i] == 'L') left_L++;
      else left_O++;
      right_L = total_L - left_L;
      right_O = total_O - left_O;
      if(left_O != right_O and right_L != left_L) {
         flag = true;
         ans = i + 1;
         break;
      }
   }
   cout << ans << "\n";

   return 0;
}