//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; string s[n];
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      string x = s[i] + s[j];
      map<char, int> mp;
      for(auto u : x) {
        mp[u]++;
      }
      bool flag = true;
      int c = 0;
      for(auto u : mp) {
        if(u.second % 2) c++;
      }
      if(x.size() % 2) {
        if(c != 1) flag = false;
      }
      if(x.size() % 2 == 0) {
        if(c != 0) flag = false;
      }
      if(flag) {
        ans++;
        cout << x << endl;
      }
      //cout << x << "\n"; 
    }
  }
  cout << ans << "\n";
  return 0;
}
// O(n*n*log(n));

