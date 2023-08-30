//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    string x = "314159265358979323846264338327";
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == x[i]) cnt++;
      else break;
    }
    cout << cnt << "\n";
  }
  return 0;
}