//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y; cin >> x >> y;
  string s; cin >> s;
  for(int i = 0; i < s.size(); i++) {
  	if(s[i] == 'U') y++;
  	else if(s[i] == 'D') y--;
  	else if(s[i] == 'L') x--;
  	else x++;
  }
  cout << x << "  " << y;
  return 0;
}