//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  while(n--) {
    string s; cin >> s;
    if(s.size() <= 10) cout << s << "\n";
    else cout << s[0] << s.size() - 2 << s[s.size() - 1] << "\n"; 
  }
  return 0;
}