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
    char c; cin >> c;
    bool flag = false;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == c and i % 2 == 0) {
        flag = true;
      }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  } 
  return 0;
}