//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  for(int i = 0; i < n; i++) {
    if(s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B') {
      i += 2;
      cout << " ";
    }
    else cout << s[i];
  }
  return 0;
}
