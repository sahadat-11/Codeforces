//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    string a; cin >> a;
    string x = "abc";
    int cnt = 0;
    for(int i = 0; i < 3; i++) {
      if(a[i] != x[i]) cnt++;
    }
    if(cnt == 3) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}