//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    char c = '0';
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == '?') s[i] = c;
      else c = s[i];
    }
    cout << s << "\n";
  }
  return 0;
}
