//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    int mx = 1, cnt = 1;
    for(int i = 0; i < n - 1; i++) {
      if(s[i] == s[i + 1]) {
        cnt++;
        mx = max(mx, cnt);
      }
      else cnt = 1;
    }
    cout << mx + 1 << endl;
  }
  return 0;
}
