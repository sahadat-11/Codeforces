//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int c = k; // if first 1 hole jeno problem na hoi
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == '0') c++;
      else {
        c -= k;
        cnt += (c / (k + 1));
        c = 0;
      }
      //cout << c << "\n";
    }
    cnt += (c / (k + 1));
    cout << cnt << "\n";
  }
  return 0;
}