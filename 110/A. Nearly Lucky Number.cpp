//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s; cin >> s;
  int four = count(s.begin(), s.end(), '4');
  int seven = count(s.begin(), s.end(), '7');
  //cout << four << " " << seven;
  if(four + seven == 4 or four + seven == 7) cout << "YES";
  else cout << "NO\n";
  return 0;
}