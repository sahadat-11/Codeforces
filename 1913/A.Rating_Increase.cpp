//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int n = s.size(), ind = 0;
   string x;
   x = s[0] + x;
   for(int i = 1; i < s.size(); i++) {
   	 if(s[i] != '0') {
   	 	ind = i; break;
   	 }
   	 x = x + s[i];
   }
   string y = s.substr(ind);
   //cout << x << " " << y << "\n";
   int a = stoi(x), b = stoi(y);
   if(b > a) cout << a << " " << b << "\n";
   else cout << "-1\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}