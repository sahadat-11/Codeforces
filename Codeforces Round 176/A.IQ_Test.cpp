//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s[4];
  for(int i = 0; i < 4; i++) cin >> s[i];
  bool flag = false;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      int cnt = 0;
      if(s[i][j] == '#') cnt++;
      if(s[i][j + 1] == '#') cnt++;
      if(s[i + 1][j] == '#') cnt++;
      if(s[i + 1][j + 1] == '#') cnt++;
      if(cnt >= 3 or cnt <= 1) flag = true;
    }
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
