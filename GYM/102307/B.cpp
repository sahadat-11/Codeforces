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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bool IsPalidrome(string s) {
  int n = s.size();
  int i = 0, j = n - 1;
  while(i <= j) {
    if(s[i] != s[j]) return false;
    i++; j--;
  }
  return true;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  string x = "";
  for(int i = 0; i <= s.size(); i++) {
    if(IsPalidrome(string(s + x))) {
      cout << s + x << '\n'; break;
    }
    x = s.substr(0, i);
    reverse(x.begin(), x.end());
  }
  return 0;
}