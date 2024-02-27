//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int q; cin >> q;
   while(q--) {
   	 int l, r, k; cin >> l >> r >> k;
   	 l--; r--;
   	 int len = (r - l + 1);
   	 k %= len;
   	 string x = s.substr(l, len);
   	 x += x;
   	 for(int i = 0; i < len; i++) {
   	 	s[i + l] = x[i + len - k];
   	 }
   }
   cout << s << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int q; cin >> q;
   while(q--) {
   	 int l, r, k; cin >> l >> r >> k;
   	 l--; r--;
   	 int len = (r - l + 1);
   	 k %= len;
   	 rotate(s.begin() + l, s.begin() + r + 1 - k, s.begin() + r + 1);
   }
   cout << s << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}