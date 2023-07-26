//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    string s[8];
    for(int i = 0; i < 8; i++) {
      cin >> s[i];
    }
    string str = "";
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
        if(s[i][j] != '.') str += s[i][j];
      }
    }
    cout << str << "\n";
  }
}