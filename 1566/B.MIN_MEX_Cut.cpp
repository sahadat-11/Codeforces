//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   s.push_back('1');
   //cout << s << endl;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
     if(s[i] == '0' and s[i + 1] == '1') cnt++;
   }
   cout << min(cnt, 2) << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
  int t;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    s = '1' + s;
    long long cnt = 0;
    for(int i = 1; i < s.length(); ++i){
      if(s[i] == '0' && s[i - 1] == '1') cnt++;
    }
    if(cnt > 2) cout << 2 << endl;
    else cout << cnt << endl;
  }
  return 0;
}