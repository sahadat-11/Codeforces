//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n, m; cin >> n >> m;
  	string x = "vika";
  	int ind = 0, j = 0;
  	for(int i = 0; i < n; i++) {
  		string s; cin >> s;
  	  for(int k = ind; k < s.size(); k++) {
  	  	if(s[k] == x[j]) {
  	  		 j++;
  	  		 ind = k + 1;
  	  	}
  	  }
  	}
  	if(j >= 4) cout << "YES\n";
  	else cout << "NO\n";
  }
  return 0;
}