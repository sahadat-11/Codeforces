//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s; cin >> s;
  for(int i = 0; i < s.size(); i++) {
    int x = s[i] - '0';
    x = min(x, 9 - x);
    s[i] = x + '0';
  }
  if(s[0] == '0') s[0] = '9';
  cout << s << "\n";
  return 0;
}
