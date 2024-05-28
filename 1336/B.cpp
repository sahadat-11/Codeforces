//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
vector<string > st;
void solve() {
   int n; string s; cin >> n >> s; 
   for(auto u : st) {
   	if(s.find(u) == -1) {
   	  cout << u << "\n"; return;
   	}
   	//cout << u << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  for(int i = 0; i < 26; i++) {
  	string x;
  	x.push_back(char(i + 'a'));
  	st.push_back(x);
  }
  for(int i = 0; i < 26; i++) {
  	for(int j = 0; j < 26; j++) {
  	  string x;
  	  x.push_back(char(i + 'a'));
  	  x.push_back(char(j + 'a'));
  	  st.push_back(x);
  	}
  }
  for(int i = 0; i < 26; i++) {
  	for(int j = 0; j < 26; j++) {
  	  for(int k = 0; k < 26; k++) {
  	  string x;
  	  x.push_back(char(i + 'a'));
  	  x.push_back(char(j + 'a'));
  	  x.push_back(char(k + 'a'));
  	  st.push_back(x);
  	  }
  	}
  }
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}