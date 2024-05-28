//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
bool is_palindrome(int i, string &s) {
	for(int j = (int)s.size() - 1; i < j; i++, j--) {
		if(s[i] != s[j]) return false;
	}
	return true;
}
void solve() {
   string s; cin >> s;
   int n = s.size();
   for(int i = 0; i < n; i++) {
   	 if(is_palindrome(i, s)) {
   	 	for(int j = i - 1; j >= 0; j--) {
   	 		s += s[j];
   	 	}
   	 	break;
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