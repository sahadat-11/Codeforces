//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int t = 1; 
  //cin >> t;
  while(t--) {
    string s; cin >> s;
    int n = s.size();
    int cnt = 0;
    for(int i = 1; i < n; i++) {
      if(s[i] == s[i - 1]) {
        for(s[i] = 'a'; s[i] == s[i - 1] or s[i] == s[i + 1]; s[i]++) {}
      }
    }
    cout << s <<endl;
  }
  return 0;
}
// https://prnt.sc/JC8B9hO_hD25