//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  int low = 0, up = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] >= 'a' and s[i] <= 'z') low++;
    else up++;
  }
  if(up > low) {
    for(int i = 0; i < n; i++) {
      s[i] = toupper(s[i]);
    }
  }
  else {
    for(int i = 0; i < n; i++) {
      s[i] = tolower(s[i]);
    }
  }
  cout << s << "\n";
  return 0;
}
