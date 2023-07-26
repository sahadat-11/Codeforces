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
    char c = '9';
    for(int i = s.size() - 1; i >= 0; i--) {
      c = min(c, s[i]);
      if(s[i] > c and s[i] < '9') s[i]++;
    }
    sort(s.begin(), s.end());
    cout << s << "\n";
  }
  return 0;
}