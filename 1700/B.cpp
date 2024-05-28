//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   if(s[0] != '9') {
   	for(int i = 0; i < n; i++) {
   	  cout << 9 - (s[i] - '0');
   	}
   	cout << "\n";
   }
   else {
     int carry = 0;
   if(s[n - 1] == '0') s[n - 1] = '1';
   else if(s[n - 1] == '1') s[n - 1] = '0';
   else {
   	s[n - 1] = char(11 - (s[n - 1] - '0') + '0');
   	carry = 1;
   } 
   //cout << s << "\n";
   for(int i = n - 2; i >= 0; i--) {
   	int x = (s[i] - '0') + carry;
   	if(x <= 1) {
   	  if(s[i] == '0' and carry == 1) s[i] = '0';
   	  else if(s[i] == '0' and carry == 0) s[i] = '1';
   	  else if(s[i] == '1' and carry == 0) s[i] = '0';
   	  carry = 0;
   	}
   	else {
   	  s[i] = char(11 - carry - (s[i] - '0') + '0'); carry = 1;
   	} 
   }
   cout << s << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}