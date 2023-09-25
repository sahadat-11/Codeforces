//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == 'B') {
        cnt++; i += (k - 1);
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}