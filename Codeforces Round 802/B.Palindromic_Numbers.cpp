//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  //string s; cin >> s;
  // for(int i = 0; i < s.size(); i++) {
  //   s[i] = ('9' - s[i]) + '0';
  // }
  // cout << s;
 int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    if(s[0] != '9') {
      for(int i = 0; i < s.size(); i++) {
        ans += ('9' - s[i] + '0');
      }
    }
    else {
      int carry = 0;
      for(int i = n - 1; i >= 0; i--) {
         int x = s[i] - '0';
         x += carry;
         if(x > 1) {
           int y = 11 - x;
           carry = 1;
           ans += (y + '0');
         }
         else {
          int y = 1 - x;
          carry = 0;
          ans += (y + '0');
         }
      }
      reverse(ans.begin(), ans.end());
    }
    cout << ans << "\n";
  }    
  return 0;
}
