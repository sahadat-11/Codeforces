//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b; cin >> a >> b;
   string s; cin >> s;
   int n = a + b;
   for(int i = 0; i < n; i++) if(s[i] == '?') s[i] = s[n - i - 1];
   a -= count(s.begin(), s.end(), '0');
   b -= count(s.begin(), s.end(), '1');
   int i = 0, j = n - 1;
   bool flag = true;
   while(i <= j) {
   	if(i == j and s[i] == '?') {
   	  	if(a >= 1) {
   	  		s[i] = '0'; s[j] = '0';
   	  	    a--;
   	  	}
   	  	else if(b >= 1){
   	  	    s[i] = '1'; s[j] = '1';
   	  	    b--;
   	    }
   	  }
   	if(i != j and s[i] == '?' and s[j] == '?') {
   	  if(a >= 2) {
   	  	s[i] = '0'; s[j] = '0';
   	  	a -= 2;
   	  }
   	  else if(b >= 2){
   	  	s[i] = '1'; s[j] = '1';
   	  	b -= 2;
   	  }
   	}
    i++; j--;
   }
    string t = s;
	reverse(t.begin() , t.end());
	if(t == s && a == 0 && b == 0) cout << s << endl;
	else cout << -1 << endl;
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