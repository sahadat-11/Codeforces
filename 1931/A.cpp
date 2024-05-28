//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   map<int, char> mp;
   for(int i = 1; i <= 26; i++) {
   	 mp[i] = 'a' + i - 1;
   }
   int n; cin >> n;
   string s;
   if(n <= 28) {
   	 s.push_back(mp[n - 2]);
   	 s.push_back('a');
   	 s.push_back('a');
   }
   else if(n <= 53) {
   	 s.push_back('z');
   	 s.push_back(mp[n - 27]);
   	 s.push_back('a');
   }
   else {
   	 s.push_back('z');
   	 s.push_back('z');
   	 s.push_back(mp[n - 52]);
   }
   reverse(s.begin(), s.end());
   cout << s << "\n";
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