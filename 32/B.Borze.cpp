//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s, ans; cin >> s;
  int n = s.size();
  for(int i = 0; i < n; i++) {
    if(s[i] == '.') ans += '0';
    else if(s[i] == '-') {
      if(s[i + 1] == '-') ans += '2';
      else ans += '1';
      i++;
    }
  }
  cout << ans << "\n";
  return 0;
}
