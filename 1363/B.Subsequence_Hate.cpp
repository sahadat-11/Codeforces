//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     string s; cin >> s;
     int total_one = 0, total_zero = 0, left_one = 0, left_zero = 0, right_one = 0, right_zero = 0;
     for(int i = 0; i < s.size(); i++) {
       if(s[i] == '0') total_zero++;
       else total_one++;
     }
     int ans = min(total_one, total_zero);
     for(int i = 0; i < s.size(); i++) {
       if(s[i] == '1') {
          left_one++;
       }
       else {
         left_zero++;
       }
       right_one = total_one - left_one;
       right_zero = total_zero - left_zero;
       ans = min(ans, left_zero + right_one);
       ans = min(ans, left_one + right_zero);
     }
     cout << ans << "\n";
   }
   return 0;
}
//https://prnt.sc/eN2Kw62S5Pwm
