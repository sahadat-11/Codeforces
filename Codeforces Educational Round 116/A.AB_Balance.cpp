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
    s[s.size() - 1] = s[0];
    cout << s << "\n";
  }

  return 0;
}